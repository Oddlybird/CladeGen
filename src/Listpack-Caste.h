using namespace std;

string GetCaste()
{
// OLD // Caste : lightly weighted.  Tyrian 1%, Lime 1%, Candy 1%, Jade 5%, violet 6%, then
// OLD // Indigo 7, Navy 8, Cerulean 9, Teal 10, Olive 11, Gold 12, Bronze 13, Maroon 16.
// -->
// Tyrian 1%, Lime 1%, Candy 1%, Jade 5%,
// violet 4%, Indigo 5, Navy 7, Cerulean 9, Teal 11, Olive 11, Gold 15, Bronze 15, Maroon 15.

int x;
string playercaste = "";

x = rand() % (100) + 1;

if (x==1)              {playercaste = "Tyrian";};
if (x==2)              {playercaste = "Lime";};
if (x==3)              {playercaste = "Off-spectrum";};
if ((x>3) and (x<9))   {playercaste = "Jade";}
if ((x>8) and (x<13))  {playercaste = "Violet";}
if ((x>12) and (x<18)) {playercaste = "Indigo";}
if ((x>17) and (x<25)) {playercaste = "Navy";}
if ((x>24) and (x<34)) {playercaste = "Cerulean";}
if ((x>33) and (x<45)) {playercaste = "Teal";}
if ((x>44) and (x<56)) {playercaste = "Olive";}
if ((x>55) and (x<71)) {playercaste = "Gold";}
if ((x>70) and (x<86)) {playercaste = "Bronze";}
if  (x>85)             {playercaste = "Maroon";}

    return playercaste;
}

