using namespace std;

#include "Listpack-Handle1.h"
#include "Listpack-Handle2.h"

string getinitials()
{
    int x;
    string initial = "";
    x = rand() % (26) + 1;
        if (x==1) {initial = "A";};
        if (x==2) {initial = "B";};
        if (x==3) {initial = "C";};
        if (x==4) {initial = "D";};
        if (x==5) {initial = "E";};
        if (x==6) {initial = "F";};
        if (x==7) {initial = "G";};
        if (x==8) {initial = "H";};
        if (x==9) {initial = "I";};
        if (x==10) {initial = "J";};
        if (x==11) {initial = "K";};
        if (x==12) {initial = "L";};
        if (x==13) {initial = "M";};
        if (x==14) {initial = "N";};
        if (x==15) {initial = "O";};
        if (x==16) {initial = "P";};
        if (x==17) {initial = "Q";};
        if (x==18) {initial = "R";};
        if (x==19) {initial = "S";};
        if (x==20) {initial = "T";};
        if (x==21) {initial = "U";};
        if (x==22) {initial = "V";};
        if (x==23) {initial = "W";};
        if (x==24) {initial = "X";};
        if (x==25) {initial = "Y";};
        if (x==26) {initial = "Z";};
    return initial;
}

string gethandle(string a, string b) {
    // Each player has a unique set of initials, a and b.  Let's use them to create a trolltag.
    string handle = "";
    if (a == "A") {handle = gethandle1A();};
    if (a == "B") {handle = gethandle1B();};
    if (a == "C") {handle = gethandle1C();};
    if (a == "D") {handle = gethandle1D();};
    if (a == "E") {handle = gethandle1E();};
    if (a == "F") {handle = gethandle1F();};
    if (a == "G") {handle = gethandle1G();};
    if (a == "H") {handle = gethandle1H();};
    if (a == "I") {handle = gethandle1I();};
    if (a == "J") {handle = gethandle1J();};
    if (a == "K") {handle = gethandle1K();};
    if (a == "L") {handle = gethandle1L();};
    if (a == "M") {handle = gethandle1M();};
    if (a == "N") {handle = gethandle1N();};
    if (a == "O") {handle = gethandle1O();};
    if (a == "P") {handle = gethandle1P();};
    if (a == "Q") {handle = gethandle1Q();};
    if (a == "R") {handle = gethandle1R();};
    if (a == "S") {handle = gethandle1S();};
    if (a == "T") {handle = gethandle1T();};
    if (a == "U") {handle = gethandle1U();};
    if (a == "V") {handle = gethandle1V();};
    if (a == "W") {handle = gethandle1W();};
    if (a == "X") {handle = gethandle1X();};
    if (a == "Y") {handle = gethandle1Y();};
    if (a == "Z") {handle = gethandle1Z();};

    if (b == "A") {handle = handle + gethandle2A();};
    if (b == "B") {handle = handle + gethandle2B();};
    if (b == "C") {handle = handle + gethandle2C();};
    if (b == "D") {handle = handle + gethandle2D();};
    if (b == "E") {handle = handle + gethandle2E();};
    if (b == "F") {handle = handle + gethandle2F();};
    if (b == "G") {handle = handle + gethandle2G();};
    if (b == "H") {handle = handle + gethandle2H();};
    if (b == "I") {handle = handle + gethandle2I();};
    if (b == "J") {handle = handle + gethandle2J();};
    if (b == "K") {handle = handle + gethandle2K();};
    if (b == "L") {handle = handle + gethandle2L();};
    if (b == "M") {handle = handle + gethandle2M();};
    if (b == "N") {handle = handle + gethandle2N();};
    if (b == "O") {handle = handle + gethandle2O();};
    if (b == "P") {handle = handle + gethandle2P();};
    if (b == "Q") {handle = handle + gethandle2Q();};
    if (b == "R") {handle = handle + gethandle2R();};
    if (b == "S") {handle = handle + gethandle2S();};
    if (b == "T") {handle = handle + gethandle2T();};
    if (b == "U") {handle = handle + gethandle2U();};
    if (b == "V") {handle = handle + gethandle2V();};
    if (b == "W") {handle = handle + gethandle2W();};
    if (b == "X") {handle = handle + gethandle2X();};
    if (b == "Y") {handle = handle + gethandle2Y();};
    if (b == "Z") {handle = handle + gethandle2Z();};

    return handle;
}

