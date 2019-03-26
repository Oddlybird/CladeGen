#ifndef INCLUDES_H_INCLUDED
#define INCLUDES_H_INCLUDED

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <ctime>
#include <stdio.h>
#include <ctype.h>

#include "namegen.h"
#include "Listpack-Caste.h"
#include "Listpack-Interests.h"
#include "Listpack-Strife.h"
#include "Listpack-Handles.h"

using namespace std;

    string playname1[24] = "";
    string playname2[24] = "";
    string playinitials[24] = "";
    string playhandle[24] = "";

    string playcol[24] = "";
    string playinterest1[24] = "";
    string playinterest2[24] = "";
    string playspecibus[24] = "";
    string playweapon[24] = "";

    string quadflush[24] = "no one";
    string quadpitch[24] = "no one";
    string quadpale[24] = "no one";
    string quadashen1[24] = "no one";
    string quadashen2[24] = "no one";
    // note to self : update ashen to distinguish who the top leaf is.
    int sessionsize = 0;

#endif // INCLUDES_H_INCLUDED

