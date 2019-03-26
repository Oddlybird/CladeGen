#ifndef main_cpp_included
#define main_cpp_included

#include "includes.h"

// all code by Wirrit (as far as I can remember)
// some item suggestions from friends online

using namespace std;

// This section is for tiny functions we will use Constantly.

bool areflush(int a, int b) {
    bool c = 0;
    if ((quadflush[a] == playinitials[b]) and (quadflush[b] == playinitials[a])) {c=1;};
    return c;
}
bool arepale(int a, int b) {
    bool c = 0;
    if ((quadpale[a] == playinitials[b]) and (quadpale[b] == playinitials[a])) {c=1;};
    return c;
}
bool arepitch(int a, int b) {
    bool c = 0;
    if ((quadpitch[a] == playinitials[b]) and (quadpitch[b] == playinitials[a])) {c=1;};
    return c;
}
bool areashen(int a, int b) {
    bool c = 0;
    if (((quadashen1[a] == playinitials[b]) or (quadashen2[a] == playinitials[b])) and
        ((quadashen1[b] == playinitials[a]) or (quadashen2[b] == playinitials[a]))) {c=1;};
    return c;
}
bool arequad(int a, int b) {
    bool c=0;
    if (areflush(a,b)==1) {c=1;};
    if (arepitch(a,b)==1) {c=1;};
    if (arepale(a,b)==1)  {c=1;};
    if (areashen(a,b)==1) {c=1;};
    return c;
}
int countquads(int a) {
    int c = 0;
    if (quadflush[a] != "") {c=c+1;};
    if (quadpitch[a] != "") {c=c+1;};
    if (quadpale[a] != "")  {c=c+1;};
    if ((quadashen1[a] != "") or (quadashen2[a] != "")) {c=c+1;};
    return c;
}

bool uniqueinitials(int a) {
    bool b = 1;
    for (int i=0; i<a; i++) {
        if (playinitials[a] == playinitials[i]) {b = 0;};
    }
    return b;
}

int SimilarityFunction(int ourguy, int sessionsize) {
    // ourguy is the number, 0 - 23, that indicates which troll we're finding a match for.
    // peepsimularity we will be using to rank which one is the best.
    int peepsimilarity[24] = {0};

    // Now, assign castes as numbers so we can compare them.
    int casterank[24] = {0};

    for (int i=0; i<sessionsize; i++) {
        if (playcol[i] == "Lime")         {casterank[i] = 0;};
        if (playcol[i] == "Off-spectrum") {casterank[i] = 0;};
        if (playcol[i] == "Maroon")       {casterank[i] = 1;};
        if (playcol[i] == "Bronze")       {casterank[i] = 2;};
        if (playcol[i] == "Gold")         {casterank[i] = 3;};
        if (playcol[i] == "Olive")        {casterank[i] = 5;};
        if (playcol[i] == "Jade")         {casterank[i] = 6;};
        if (playcol[i] == "Teal")         {casterank[i] = 7;};
        if (playcol[i] == "Cerulean")     {casterank[i] = 8;};
        if (playcol[i] == "Navy")         {casterank[i] = 9;};
        if (playcol[i] == "Indigo")       {casterank[i] = 10;};
        if (playcol[i] == "Violet")       {casterank[i] = 11;};
        if (playcol[i] == "Tyrian")       {casterank[i] = 12;};
    }
    for (int i=0; i<sessionsize; i++) {
        // find the distance in rank between ourguy and guy i; it is a number between 0 and 11.
        // subtract that distance from 11, so that Bigger Distance = Lower Number
        peepsimilarity[i] = 12 - abs (casterank[ourguy] - casterank[i]);
        // Make the numbers big, so we can add some noise in.
        peepsimilarity[i] = 100*peepsimilarity[i];
        // Now 100 points of similarity = 1 caste rank.
        // add the noise in : Now, even if no one has anything in common, they'll still have an order.
        int noiseforpreferences = rand() % (50) + 1;
        peepsimilarity[i] = peepsimilarity[i] + noiseforpreferences;
        // Do they share interests?
        if ((playinterest1[i] == playinterest1[ourguy]) or (playinterest1[i] == playinterest2[ourguy]))
            {peepsimilarity[i] = peepsimilarity[i] +250;};
        if ((playinterest2[i] == playinterest1[ourguy]) or (playinterest2[i] == playinterest2[ourguy]))
            {peepsimilarity[i] = peepsimilarity[i] +250;};
        // How about specibi?
        if (playspecibus[i] == playspecibus[ourguy]) {peepsimilarity[i] = peepsimilarity[i]+150;};
        // What about weapon?
        if (playweapon[i] == playweapon[ourguy]) {peepsimilarity[i] = peepsimilarity[i]+500;};
        // Subtract some if the troll in consideration has too many quads already.
        if (countquads(i) > 1)  {peepsimilarity[i] = peepsimilarity[i] - 100;};
        if (countquads(i) > 2)  {peepsimilarity[i] = peepsimilarity[i] - 100;};
        // Add some if troll I has zero quads
        if (countquads(i) == 0) {peepsimilarity[i] = peepsimilarity[i] + 100;};
        // and drop the rating into the dirt if the troll is 100% spoken for.
        if (countquads(i) > 3)  {peepsimilarity[i] = peepsimilarity[i] - 3000;};
        // And drop it lots if the troll is already quadranted to our guy.
        if (arequad(i,ourguy==1)) {peepsimilarity[i] = peepsimilarity[i] - 500;};
    }
    // Now let's make sure our guy won't quad himself.
    peepsimilarity[ourguy] = -9001;

// Make a variable to track rank, and fill it with the indexes of all trolls.
// finalrank[0] = the index of the first troll on the list; initially troll 0.
    int finalrank[24] = {0};
    for (int j=0; j<sessionsize; j++) {
        finalrank[j] = j;
    }
// Now use a simple inefficient sort, to shove higher-similarity trolls to the top of the list.
    for (int j=0; j<sessionsize; j++) {
        for (int i=0; i<sessionsize; i++) {
            if (peepsimilarity[i] > peepsimilarity[j]) {swap(finalrank[j],finalrank[i]);};
        }
    }
// Fix wrong options here.
// consider :  Can we make the "too many quads" quality check happen here?
    if (finalrank[0] == ourguy) {swap(finalrank[0],finalrank[1]);};
// They are now ranked in order of similarity.
    return finalrank[0];
}

void PrintPlayer(int i) {
    cout << playname1[i] << " " << playname2[i] << ", " << playhandle[i] << ", " << playinitials[i] << endl;
    cout << playcol[i] << ": " << playinterest1[i] << " and " << playinterest2[i] << endl;
    cout << playspecibus[i] << ": " << playweapon[i] << endl;
    if (quadflush[i] != "no one") { cout << " <3 " << quadflush[i];};
    if (quadpitch[i] != "no one") { cout << " <3< " << quadpitch[i];};
    if (quadpale[i] != "no one") { cout << " <> " << quadpale[i];};
    if (quadashen1[i] != "no one") { cout << " c3< " << quadashen1[i] << " / " << quadashen2[i];};
    cout << endl;
    cout << endl;
}



int main()
{
    string userInput;
    int thekey = 1;
    srand( time(NULL) );

    // MAIN LOOP BEGINS
    while ( thekey != 0 ) {

        namegenerator tgen;

// Generate each troll's name, caste, interests, specibus, weapon....
    for (int i=0; i<sessionsize; i++) {
        if (sessionsize > i) {
                playname1[i] = tgen.makename();     // Hatch Name
                playname2[i] = tgen.makename();     // Bloodline Name
                playcol[i] = GetCaste();            // Get Caste
                playinterest1[i] = GetInterest();   // Get an interest
                playinterest2[i] = playinterest1[i];// get a UNIQUE second interest
                while (playinterest2[i]==playinterest1[i]) {playinterest2[i]=GetInterest();};
                playspecibus[i] = GetSpecibus();    // Specibus and
                playweapon[i] = GetWeapon(playspecibus[i]); // weapon
                // Now for trolltags.  Give the first troll a set of initials.
                string initial1 = getinitials();
                string initial2 = getinitials();
                playinitials[i] = initial1 + initial2;
                // Next, ensure each troll has a different set of initials from all previous to them.
                while ((i>0) and (uniqueinitials(i)==0)) {
                        initial1 = getinitials(); initial2 = getinitials();
                        playinitials[i] = initial1 + initial2;};
                // Lastly, assign a trolltag based on their (now unique) initials.
                playhandle[i] = gethandle(initial1, initial2);


                // Give certain bloodlines certain traits
                if (playname2[i]=="megido") {playcol[i]=="Maroon";};
                if (playname2[i]=="nitram") {playcol[i]=="Bronze";};
                if (playname2[i]=="captor") {playcol[i]=="Gold"; playinterest2[i]=="Video Games";};
                if (playname2[i]=="vantas") {playcol[i]=="Off-spectrum";};
                if (playname2[i]=="leijon") {playcol[i]=="Olive";};
                if (playname2[i]=="maryam") {playcol[i]=="Jade";};
                if (playname2[i]=="pyrope") {playcol[i]=="Teal";};
                if (playname2[i]=="serket") {playcol[i]=="Cerulean";};
                if (playname2[i]=="zahhak") {playcol[i]=="Navy"; playinterest2[i]=="Engineering";};
                if (playname2[i]=="makara") {playcol[i]=="Indigo";};
                if (playname2[i]=="ampora") {playcol[i]=="Violet";};
                if (playname2[i]=="peixes") {playcol[i]=="Tyrian";};
                if (playname2[i]=="furoze") {playcol[i]=="Lime"; playinterest2[i]=="Engineering";};
                if (playname2[i]=="kahrde") {playcol[i]=="Jade";};
                if (playname2[i]=="reisle") {playcol[i]=="Indigo";};
                // everyone likes their references..

        };
    }
// That was the shortest part of the entire program.  It's just pulling random entries out of lists.
// Now for the hard part :  Graph Theory.

// Quad time
// fuckin hell this is long...
if (sessionsize>3) {
    for (int i=0; i<sessionsize; i++) {
        if (sessionsize > i) {
            // Let's find a potential quadrant match.
            int dudenum = SimilarityFunction(i,sessionsize);
            // This is the person troll I has the most in common with.
            // If these two trolls are not yet quadranted
            if (arequad(i,dudenum)==0) {
                // randomly attempt to assign a quad between these two people (90% success):
                // This percentage thing leaves room to add polyquad, quadfluid, etc later.
                // 1/3 flush, 1/3 pitch, 1/3 pale, a few percent "no quad".
                // If the desired quad isn't available, it just fails --
                // --unless the desired quad is pitch, in which case it 25% turns ashen.
                int x = 0;
                x = rand() % (90) + 1;


/*flush*/       if ((x<25) and (quadflush[i] == "no one") and (quadflush[dudenum] == "no one"))
                    {quadflush[i] = playinitials[dudenum]; quadflush[dudenum] = playinitials[i];};
/*pitch*/       if ((x>24) and (x<50) and (quadpitch[i] == "no one") and (quadpitch[dudenum] == "no one"))
                    {quadpitch[i] = playinitials[dudenum]; quadpitch[dudenum] = playinitials[i];};
/*pale*/        if ((x>49) and (x<75) and (quadpale[i] == "no one") and (quadpale[dudenum] == "no one"))
                    {quadpale[i] = playinitials[dudenum]; quadpale[dudenum] = playinitials[i];};
/*ashen*/       if ((x>74) and (x<85) and (quadashen1[i] == "no one") and (quadashen1[dudenum]=="no one") and (arequad(i,dudenum)==0)) {
                    int ashencourt = SimilarityFunction(dudenum,sessionsize);
                    if ((quadashen1[ashencourt] == "no one") and (arequad(dudenum,ashencourt)==0) and (arequad(i,ashencourt)==0)) {
                        quadashen1[i] = playinitials[dudenum];    quadashen2[i] = playinitials[ashencourt];
                        quadashen1[dudenum] = playinitials[i];    quadashen2[dudenum] = playinitials[ashencourt];
                        quadashen1[ashencourt] = playinitials[i]; quadashen2[ashencourt] = playinitials[dudenum];
                        };
                    };

          }; // end  "If trolls are not quadranted to eachother"

          // Sometimes trolls quadrant their inclade.  Let's do that.

          // If our dude I shares a quadrant with Dudenum;
          if (arequad(i,dudenum)) {
          // i is the index of our troll, and dudenum indexes a quadrant mate of theirs.
          // x = random number, y = index of clademate's quadrant, z = 2nd inclade, quadfound = binary flag
          int x,y,z,quadfound = 0;
          x = rand() % (100) + 1;  // controls failure chance of The Dreaded Triangle

// THE DREADED PALE-PITCH-FLUSH TRIANGLE:
              // if clademate has a flush partner other than our guy
              if ((quadflush[dudenum] != "no one") and (quadflush[dudenum] != playinitials[i]) and (quadfound==0)) {
                // find their index
                for (int i=0; i<sessionsize; i++) {if (quadflush[dudenum]==playinitials[i]) {y=i;};};

                // If troll I and Y are unquadranted, try to quadrant them, pale then pitch
                // THE TRIANGLE
                if ((quadpale[i] == "no one") and (quadpale[y] == "no one") and (arequad(i,y)==0) and (x>75))
                    {quadpale[i] = playinitials[y]; quadpale[y] = playinitials[i]; quadfound=1;};
                if ((quadpitch[i] == "no one") and (quadpitch[y] == "no one") and (arequad(i,y)==0) and (x>75))
                    {quadpitch[i] = playinitials[y]; quadpitch[y] = playinitials[i]; quadfound=1;};
              }; // end clademate's flush partner

              // if clademate has a pale partner other than our guy, and no quad has been found yet...
              if ((quadpale[dudenum] != "no one") and (quadpale[dudenum] != playinitials[i]) and (quadfound==0)) {
                // find their index
                for (int i=0; i<sessionsize; i++) {if (quadpale[dudenum]==playinitials[i]) {y=i;};};
                // If troll I and Y are unquadranted, try to quadrant them, flush then pitch
                // THE TRIANGLE
                if ((quadflush[i] == "no one") and (quadflush[y] == "no one") and (arequad(i,y)==0) and (x>75))
                    {quadflush[i] = playinitials[y]; quadflush[y] = playinitials[i]; quadfound=1;};
                if ((quadpitch[i] == "no one") and (quadpitch[y] == "no one") and (arequad(i,y)==0) and (x>75))
                    {quadpitch[i] = playinitials[y]; quadpitch[y] = playinitials[i]; quadfound=1;};
              }; // end clademate's pale partner

              // if clademate has a pitch partner other than our guy, and no quad has been found yet...
              if ((quadpitch[dudenum] != "no one") and (quadpitch[dudenum] != playinitials[i]) and (quadfound==0)) {
                // find their index
                for (int i=0; i<sessionsize; i++) {if (quadpitch[dudenum]==playinitials[i]) {y=i;};};
                // If troll I and Y are unquadranted, try to quadrant them, flush then pale
                // THE TRIANGLE
                if ((quadflush[i] == "no one") and (quadflush[y] == "no one") and (arequad(i,y)==0) and (x>75))
                    {quadflush[i] = playinitials[y]; quadflush[y] = playinitials[i]; quadfound=1;};
                if ((quadpale[i] == "no one") and (quadpale[y] == "no one") and (arequad(i,y)==0) and (x>75))
                    {quadpale[i] = playinitials[y]; quadpale[y] = playinitials[i]; quadfound=1;};
              }; // end clademate's pitch partner
// END PALE-PITCH-FLUSH TRIANGLE

// Begin SQUARES
	      // if INCLADE has a flush partner other than our dude and his quadrant,
              if ((quadflush[y] != "no one") and (areflush(i,y)==0) and (areflush(y,dudenum)==0) and (quadfound==0)) {
                // find their index
                for (int a=0; a<sessionsize; a++) {if (quadflush[y]==playinitials[a]) {z=a;};};
		        // I is who we're checking.  Dudenum is his quadrant.  Y is dudenum's quadrant.  Z is Y's quadrant.
                // They are all distinct people with different names.
                // If troll I and Z are unquadranted, try to quadrant them, pale then pitch
                if ((quadpale[i] == "no one") and (quadpale[z] == "no one") and (arequad(i,z)==0) and (x<90))
                    {quadpale[i] = playinitials[z]; quadpale[z] = playinitials[i]; quadfound=1;};
                if ((quadpitch[i] == "no one") and (quadpitch[z] == "no one") and (arequad(i,z)==0) and (x<90))
                    {quadpitch[i] = playinitials[z]; quadpitch[z] = playinitials[i]; quadfound=1;};
                };

	      // if INCLADE has a pale partner other than our dude and his quadrant,
              if ((quadpale[y] != "no one") and (arepale(i,y)==0) and (arepale(y,dudenum)==0) and (quadfound==0)) {
                // find their index
                for (int a=0; a<sessionsize; a++) {if (quadpale[y]==playinitials[a]) {z=a;};};
   		        // I is who we're checking.  Dudenum is his quadrant.  Y is dudenum's quadrant.  Z is Y's quadrant.
                // They are all distinct people with different names.
                // If troll I and Z are unquadranted, try to quadrant them, flush then pitch
                if ((quadflush[i] == "no one") and (quadflush[z] == "no one") and (arequad(i,z)==0) and (x<90))
                    {quadflush[i] = playinitials[z]; quadflush[z] = playinitials[i]; quadfound=1;};
                if ((quadpitch[i] == "no one") and (quadpitch[z] == "no one") and (arequad(i,z)==0) and (x<90))
                    {quadpitch[i] = playinitials[z]; quadpitch[z] = playinitials[i]; quadfound=1;};
                };
	      // if INCLADE has a pitch partner other than our dude and his quadrant,
              if ((quadpitch[y] != "no one") and (arepitch(i,y)==0) and (arepitch(y,dudenum)==0) and (quadfound==0)) {
                // find their index
                for (int a=0; a<sessionsize; a++) {if (quadpitch[y]==playinitials[a]) {z=a;};};
		        // I is who we're checking.  Dudenum is his quadrant.  Y is dudenum's quadrant.  Z is Y's quadrant.
                // They are all distinct people with different names.
                // If troll I and Z are unquadranted, try to quadrant them, flush then pale
                if ((quadflush[i] == "no one") and (quadflush[z] == "no one") and (arequad(i,z)==0) and (x<90))
                    {quadflush[i] = playinitials[z]; quadflush[z] = playinitials[i]; quadfound=1;};
                if ((quadpale[i] == "no one") and (quadpale[z] == "no one") and (arequad(i,z)==0) and (x<90))
                    {quadpale[i] = playinitials[z]; quadpale[z] = playinitials[i]; quadfound=1;};
                };
// END SQUARES
            quadfound=0; // clear your variables, children...
            y=0;
            z=0;
          }; // end "Quad your inclade"
        }; // end "i and dudenum are quadded"
    }; // end For Each Troll loop
   }; // end "Only with 3+ trolls" limit
// Print results


    for (int i=0; i<sessionsize; i++) {
        if (sessionsize > i) {
                PrintPlayer(i);
        };
    }

// shit let's clear some variables

    for (int i=0; i<24; i++) {
    quadflush[i] = "no one";
    quadpitch[i] = "no one";
    quadpale[i] = "no one";
    quadashen1[i] = "no one";
    quadashen2[i] = "no one";
    playcol[i] = "";
    playname1[i] = "";
    playname2[i] = "";
    playinterest1[i] = "";
    playinterest2[i] = "";
    playspecibus[i] = "";
    playweapon[i] = "";
    };


        // Horn Description :  things like "Long and swept back", roll a percentage to see if you get 1 or 2 horn descs
        // Tooth/lip/eye, and facial mutation description : some may conflict, have a tree to call non-conflicting combinations.

        // Wait for Input
        // repeat program unless input is "0"
        cout << endl << endl << "Generate how many trolls (max 24)?" << endl;
        getline (cin,userInput);
        stringstream(userInput) >> thekey;
        if ((thekey > 0) and (thekey <25)) {sessionsize = thekey;};
    }
    // END MAIN LOOP
    return 0;
}
#endif // main_cpp_included
