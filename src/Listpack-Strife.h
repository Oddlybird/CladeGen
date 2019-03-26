using namespace std;

string GetWeapon(string Specibus) {
    int x = 0;
    string Weapon = "";
// Thank you to Nadaya's mun, and the Re:surrection RP timeline OOC chat for their help brainstorming
    if (Specibus=="bladeKind")  {
        x = rand() % (9) + 1;
        if (x==1)  {Weapon = "Bastard Sword";};
        if (x==2)  {Weapon = "Model Lightsaber";};
        if (x==3)  {Weapon = "Two Handed Sword";};
        if (x==4)  {Weapon = "Katana";};
        if (x==5)  {Weapon = "Short Sword";};
        if (x==6)  {Weapon = "Helicopter Rotor";};
        if (x==7)  {Weapon = "Roller Blades";};
        if (x==8)  {Weapon = "1/2 Scissors";};
        if (x==9)  {Weapon = "Bread Knife";};
    };
    if (Specibus=="pistolKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Squirt Gun";};
        if (x==2)  {Weapon = "Nerf Gun";};
        if (x==3)  {Weapon = "Uzi";};
        if (x==4)  {Weapon = "Flare Gun";};
        if (x==5)  {Weapon = "9mm";};
        if (x==6)  {Weapon = "Tattoo Gun";};
        if (x==7)  {Weapon = "Revolver";};
    };
    if (Specibus=="offcespplyKind")  {
        x = rand() % (18) + 1;
        if (x==1)   {Weapon = "Staple Gun";};
        if (x==2)   {Weapon = "Coffee Machine";};
        if (x==3)   {Weapon = "Ruler";};
        if (x==4)   {Weapon = "Scissors";};
        if (x==5)   {Weapon = "3x5 cards";};
        if (x==6)   {Weapon = "Paper Cutter";};
        if (x==7)   {Weapon = "Pen Cap";};
        if (x==8)   {Weapon = "Trash Can";};
        if (x==9)   {Weapon = "Flowerpot";};
        if (x==10)  {Weapon = "Calendar";};
        if (x==11)  {Weapon = "Monitor";};
        if (x==12)  {Weapon = "Drawer";};
        if (x==13)  {Weapon = "Spinny Chair";};
        if (x==14)  {Weapon = "Clock";};
        if (x==15)  {Weapon = "Office Chair Base";};
        if (x==16)  {Weapon = "Coffee Grinder";};
        if (x==17)  {Weapon = "Stapler";};
        if (x==18)  {Weapon = "Folded Paper Triangles";};
    };
    if (Specibus=="gloveKind")  {
        x = rand() % (10) + 1;
        if (x==1)  {Weapon = "Boxing Gloves";};
        if (x==2)  {Weapon = "Brass Knuckles";};
        if (x==3)  {Weapon = "Silk Gloves";};
        if (x==4)  {Weapon = "Latex Gloves";};
        if (x==5)  {Weapon = "Gauntlets";};
        if (x==6)  {Weapon = "Toe Socks";};
        if (x==7)  {Weapon = "Mittens";};
        if (x==8)  {Weapon = "Catcher's Mitt";};
        if (x==9)  {Weapon = "Oven Mitts";};
        if (x==10)  {Weapon = "Knitted Gloves";};
    };
    if (Specibus=="axeKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Battle Axe";};
        if (x==2)  {Weapon = "Hatchet";};
        if (x==3)  {Weapon = "Bitchin' Guitar";};
        if (x==4)  {Weapon = "Axe Body Spray";};
        if (x==5)  {Weapon = "Tomahawk";};
        if (x==6)  {Weapon = "Fire Axe";};
    };
    if (Specibus=="fncysntaKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Fancy Santa";};
        if (x==2)  {Weapon = "Very Fancy Santa";};
        if (x==3)  {Weapon = "VERY Fancy Santa";};
        if (x==4)  {Weapon = "Santa Figurine";};
        if (x==5)  {Weapon = "Christmas Ornament";};
        if (x==6)  {Weapon = "Garden Gnome";};
    };
    if (Specibus=="whipKind")  {
        x = rand() % (9) + 1;
        if (x==1)  {Weapon = "Wiimote";};
        if (x==2)  {Weapon = "1/2 Bow";};
        if (x==3)  {Weapon = "Lasso";};
        if (x==4)  {Weapon = "Whip";};
        if (x==5)  {Weapon = "Leather Belt";};
        if (x==6)  {Weapon = "Bullwhip";};
        if (x==7)  {Weapon = "Jump Rope";};
        if (x==8)  {Weapon = "Steel Cable";};
        if (x==9)  {Weapon = "Dog Leash";};
    };
    if (Specibus=="hammerKind")  {
        x = rand() % (13) + 1;
        if (x==1)  {Weapon = "Sledgehammer";};
        if (x==2)  {Weapon = "War Hammer";};
        if (x==3)  {Weapon = "Claw Hammer";};
        if (x==4)  {Weapon = "Ballpeen Hammer";};
        if (x==5)  {Weapon = "Meat Tenderizer";};
        if (x==6)  {Weapon = "Smith's Hammer";};
        if (x==7)  {Weapon = "Hammerhead Shark";};
        if (x==8)  {Weapon = "MC Hammer Memorabilia";};
        if (x==9)  {Weapon = "Mallet";};
        if (x==10) {Weapon = "Hammer";};
        if (x==11) {Weapon = "Rubber Mallet";};
        if (x==12) {Weapon = "Reflex Hammer";};
        if (x==13) {Weapon = "Peanut Brittle Hammer";};
        };
    if (Specibus=="clubKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Baseball Bat";};
        if (x==2)  {Weapon = "Golf Club";};
        if (x==3)  {Weapon = "Night Stick";};
        if (x==4)  {Weapon = "Bowling Pin";};
        if (x==5)  {Weapon = "Juggling Clubs";};
        if (x==6)  {Weapon = "Hockey Stick";};
        if (x==7)  {Weapon = "Large Stick";};
    };
    if (Specibus=="clawKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Wolverine Claws";};
        if (x==2)  {Weapon = "Bagh Nakh";};
        if (x==3)  {Weapon = "Fake Fingernails";};
    };
    if (Specibus=="chainsawKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Chainsword";};
        if (x==2)  {Weapon = "Chainaxe";};
        if (x==3)  {Weapon = "Chainstaff";};
        if (x==4)  {Weapon = "Chainsaw";};
    };
    if (Specibus=="makeupKind")  {
        x = rand() % (9) + 1;
        if (x==1)  {Weapon = "Eyeshadow Compact";};
        if (x==2)  {Weapon = "Perfume";};
        if (x==3)  {Weapon = "Facepaint";};
        if (x==4)  {Weapon = "Mascara Stick";};
        if (x==5)  {Weapon = "Eyelash Curler";};
        if (x==6)  {Weapon = "Nail Polish";};
        if (x==7)  {Weapon = "Hairspray";};
        if (x==8)  {Weapon = "Lipstick";};
        if (x==9)  {Weapon = "Comb";};
    };
    if (Specibus=="umbrellaKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Umbrella Sword";};
        if (x==2)  {Weapon = "Parasol";};
        if (x==3)  {Weapon = "Drink Accessory";};
        if (x==4)  {Weapon = "Umbrella";};
    };
    if (Specibus=="scytheKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Farming Scythe";};
        if (x==2)  {Weapon = "Hand-Scythe";};
        if (x==3)  {Weapon = "Sickle";};
        if (x==4)  {Weapon = "Scythe";};
    };
    if (Specibus=="spearKind")  {
        x = rand() % (10) + 1;
        if (x==1)  {Weapon = "Spear";};
        if (x==2)  {Weapon = "Javelin";};
        if (x==3)  {Weapon = "Hawaiian Sling";};
        if (x==4)  {Weapon = "Spearmint Gum";};
        if (x==5)  {Weapon = "Bohemian Earpsoon";};
        if (x==6)  {Weapon = "Pike";};
        if (x==7)  {Weapon = "Halberd";};
        if (x==8)  {Weapon = "Large Silverware";};
        if (x==9)  {Weapon = "Lance";};
        if (x==10)  {Weapon = "Pointy Stick";};
    };
    if (Specibus=="needleKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Knitting Needles";};
        if (x==2)  {Weapon = "Twig";};
        if (x==3)  {Weapon = "Crochet Needle";};
        if (x==4)  {Weapon = "Hypodermic Needle";};
        if (x==5)  {Weapon = "Recordplayer Needle";};
        if (x==6)  {Weapon = "Tattoo Gun";};
        if (x==7)  {Weapon = "Shitty Wand";};
    };
    if (Specibus=="bowKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Short Bow";};
        if (x==2)  {Weapon = "Compound Bow";};
        if (x==3)  {Weapon = "Cross Bow";};
        if (x==4)  {Weapon = "Fancy Silk Bow";};
        if (x==5)  {Weapon = "Long Bow";};
    };
    if (Specibus=="diceKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Cup Of Six-siders";};
        if (x==2)  {Weapon = "8 8-sided dice";};
        if (x==3)  {Weapon = "20-sided Die";};
        if (x==4)  {Weapon = "Brick of 6-sided dice";};
        if (x==5)  {Weapon = "Lonely Ivory 12-sider";};
        if (x==6)  {Weapon = "Golden Percentile Dice";};
        if (x==7)  {Weapon = "Pop-o-Matic";};
    };
    if (Specibus=="2x3dentKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Double Fork";};
        if (x==2)  {Weapon = "Double Pitchfork";};
        if (x==3)  {Weapon = "2x3Trident";};
    };
    if (Specibus=="guitarKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Electric Guitar";};
        if (x==2)  {Weapon = "12-string Guitar";};
        if (x==3)  {Weapon = "Ukelele";};
        if (x==4)  {Weapon = "Bitchin' Axe";};
        if (x==5)  {Weapon = "Acoustic Guitar";};
    };
    if (Specibus=="knifeKind")  {
        x = rand() % (15) + 1;
        if (x==1)  {Weapon = "Pocket Knife";};
        if (x==2)  {Weapon = "Dagger";};
        if (x==3)  {Weapon = "Kukri";};
        if (x==4)  {Weapon = "Sai";};
        if (x==5)  {Weapon = "Throwing Knife";};
        if (x==6)  {Weapon = "Dirk";};
        if (x==7)  {Weapon = "Shiv";};
        if (x==8)  {Weapon = "Bayonet";};
        if (x==9)  {Weapon = "Butterfly Knife";};
        if (x==10)  {Weapon = "Letter Opener";};
        if (x==11)  {Weapon = "Palette Knife";};
        if (x==12)  {Weapon = "Machete";};
        if (x==13)  {Weapon = "Scalpel";};
        if (x==14)  {Weapon = "X-acto Knife";};
        if (x==15)  {Weapon = "Steak Knife";};
    };
    if (Specibus=="grenadeKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Smoke Grenades";};
        if (x==2)  {Weapon = "Flash Grenades";};
        if (x==3)  {Weapon = "Molotov Cocktails";};
        if (x==4)  {Weapon = "Water Balloons";};
        if (x==5)  {Weapon = "Glitter-filled Easter Eggs";};
        if (x==6)  {Weapon = "Frag Grenades";};
    };
    if (Specibus=="staffKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Bo Staff";};
        if (x==2)  {Weapon = "Quarterstaff";};
        if (x==3)  {Weapon = "Scepter";};
        if (x==4)  {Weapon = "Pool Cue";};
    };
    if (Specibus=="rifleKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Machine Gun";};
        if (x==2)  {Weapon = "Shotgun";};
        if (x==3)  {Weapon = "Sniper Rifle";};
        if (x==4)  {Weapon = "Unconvincing Musket Replica";};
        if (x==5)  {Weapon = "Harpoon Gun";};
        if (x==6)  {Weapon = "Paintball Gun";};
    };
    if (Specibus=="maceKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Flail";};
        if (x==2)  {Weapon = "Morning Star";};
        if (x==3)  {Weapon = "Nunchucks";};
        if (x==4)  {Weapon = "Scepter";};
        if (x==5)  {Weapon = "Pepper Spray";};
        if (x==6)  {Weapon = "Mace";};
    };
    if (Specibus=="explosivesKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Fireworks";};
        if (x==2)  {Weapon = "Dynamite";};
        if (x==3)  {Weapon = "C4";};
        if (x==4)  {Weapon = "Claymores";};
        if (x==5)  {Weapon = "Gunpowder Keg";};
        if (x==6)  {Weapon = "Cherrybombs";};
        if (x==7)  {Weapon = "Confetti Poppers";};
    };
    if (Specibus=="projectileKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Throwing Knives";};
        if (x==2)  {Weapon = "Shuriken";};
        if (x==3)  {Weapon = "Kunai";};
        if (x==4)  {Weapon = "Pencils";};
        if (x==5)  {Weapon = "Folded Paper Triangles";};
        if (x==6)  {Weapon = "Darts";};
    };
    if (Specibus=="wrenchKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Pipe Wrench";};
        if (x==2)  {Weapon = "Monkey Wrench";};
        if (x==3)  {Weapon = "Socket Wrench";};
        if (x==4)  {Weapon = "Hex Nut Wrench";};
        if (x==5)  {Weapon = "Crescent Wrench";};
    };
    if (Specibus=="screwdriverKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Phillips Screwdriver";};
        if (x==2)  {Weapon = "Electric Screwdriver";};
        if (x==3)  {Weapon = "Sonic Screwdriver toy";};
        if (x==4)  {Weapon = "Hex Nut Spanner";};
        if (x==5)  {Weapon = "Flathead Screwdriver";};
    };
    if (Specibus=="pizzactrKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Rotary Fabric Shears";};
        if (x==2)  {Weapon = "Strange Dremel Attatchment";};
        if (x==3)  {Weapon = "Boxcutter";};
        if (x==4)  {Weapon = "Laser-Guided Pizza Cutter";};
        if (x==5)  {Weapon = "Rotary Knife";};
        if (x==6)  {Weapon = "Pizza Cutter";};
    };
    if (Specibus=="batKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Wooden Bat";};
        if (x==2)  {Weapon = "Aluminum Bat";};
        if (x==3)  {Weapon = "Vampire Bat";};
        if (x==4)  {Weapon = "Board with a Nail in it";};
        if (x==5)  {Weapon = "Plastic Bat";};
        if (x==6)  {Weapon = "Scepter";};
        if (x==7)  {Weapon = "Taxidermied Bat";};
    };
    if (Specibus=="rollpinKind")  {
        x = rand() % (9) + 1;
        if (x==1)  {Weapon = "Silicon-coated Rolling Pin";};
        if (x==2)  {Weapon = "Glass Rolling Pin";};
        if (x==3)  {Weapon = "Plastic Rolling Pin";};
        if (x==4)  {Weapon = "Glass Bottle";};
        if (x==5)  {Weapon = "Large Jar";};
        if (x==6)  {Weapon = "Soupcan";};
        if (x==7)  {Weapon = "Scepter";};
        if (x==8)  {Weapon = "Wooden Table Leg";};
        if (x==9)  {Weapon = "Wooden Rolling Pin";};
    };
    if (Specibus=="yoyoKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Pro-Quality Yoyo";};
        if (x==2)  {Weapon = "Light-up Yoyo";};
        if (x==3)  {Weapon = "Bobbin on a String";};
        if (x==4)  {Weapon = "Stargate Commemorative Yoyo";};
        if (x==5)  {Weapon = "Dale Earnheart Commemorative Yoyo";};
        if (x==6)  {Weapon = "Shitty Yoyo";};
    };
    if (Specibus=="scissorKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Shepherd's Shears";};
        if (x==2)  {Weapon = "Safety Scissors";};
        if (x==3)  {Weapon = "Kitchen Scissors";};
        if (x==4)  {Weapon = "Frighteningly Rusty Scissors";};
        if (x==5)  {Weapon = "Gardening Shears";};
        if (x==6)  {Weapon = "Scissors";};

    };
    if (Specibus=="peprspryKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Child-safe Pepper Spray";};
        if (x==2)  {Weapon = "Minty Fresh Pepper Spray";};
        if (x==3)  {Weapon = "Jalapeno Pepper Spray";};
        if (x==4)  {Weapon = "Salt and Pepper Spray";};
        if (x==5)  {Weapon = "Pepper Spray";};
    };
    if (Specibus=="crowbarKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Crooked Stick";};
        if (x==2)  {Weapon = "Hockey Stick";};
        if (x==3)  {Weapon = "Bent Metal Pipe";};
        if (x==4)  {Weapon = "Bent Golf Club";};
        if (x==5)  {Weapon = "Crowbar";};
    };
    if (Specibus=="broomKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Swiffer Sweeper";};
        if (x==2)  {Weapon = "Broom";};
        if (x==3)  {Weapon = "Pushbroom";};
    };
    if (Specibus=="pokerKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Cast Iron Poker";};
        if (x==2)  {Weapon = "Silver Gilt Poker";};
        if (x==3)  {Weapon = "Filigreed Poker";};
        if (x==4)  {Weapon = "Slightly Burnt Stick";};
        if (x==5)  {Weapon = "Crowbar";};
        if (x==6)  {Weapon = "Metal Pipe";};
    };
    if (Specibus=="icepickKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Ice PIck";};
        if (x==2)  {Weapon = "Rock Hammer";};
        if (x==3)  {Weapon = "Miner's Pick";};
    };
    if (Specibus=="golfclubKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Wedge";};
        if (x==2)  {Weapon = "9-Iron";};
        if (x==3)  {Weapon = "Driver";};
        if (x==4)  {Weapon = "Putter";};
        if (x==5)  {Weapon = "Long Stick";};
    };
    if (Specibus=="ropeKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Climbing Rope";};
        if (x==2)  {Weapon = "Frayed Hemp Rope";};
        if (x==3)  {Weapon = "Silk Rope";};
    };
    if (Specibus=="shovelKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Shovel";};
        if (x==2)  {Weapon = "Foldable Camp Shovel";};
        if (x==3)  {Weapon = "Large Spade";};
        if (x==4)  {Weapon = "Garden Trowel";};
        if (x==5)  {Weapon = "Mason's Spade";};
    };
    if (Specibus=="spoonKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Wooden Spoon";};
        if (x==2)  {Weapon = "Silver Spoon";};
        if (x==3)  {Weapon = "Stirring Spoon";};
        if (x==4)  {Weapon = "Soup Spoon";};
        if (x==5)  {Weapon = "Tea Spoon";};
    };
    if (Specibus=="statueKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Anime Figurine";};
        if (x==2)  {Weapon = "Wizard Statue";};
        if (x==3)  {Weapon = "Fancy Santa";};
        if (x==4)  {Weapon = "Dragon Figurine";};
        if (x==5)  {Weapon = "Garden Gnome";};
        if (x==6)  {Weapon = "Precious Moments";};
        if (x==7)  {Weapon = "Marble Bust";};
    };
    if (Specibus=="spatulaKind")  {
        x = rand() % (2) + 1;
        if (x==1)  {Weapon = "Shitty Dollarstore Spatula";};
        if (x==2)  {Weapon = "Silicone Spatula";};
    };
    if (Specibus=="lampKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Lava Lamp";};
        if (x==2)  {Weapon = "Lampshade";};
        if (x==3)  {Weapon = "Electric Lamp";};
        if (x==4)  {Weapon = "Antique Oil Lamp";};
    };
    if (Specibus=="ballKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Soccer Ball";};
        if (x==2)  {Weapon = "Baseball";};
        if (x==3)  {Weapon = "Basketball";};
        if (x==4)  {Weapon = "Bowling Ball";};
        if (x==5)  {Weapon = "Ball Bearings";};
        if (x==6)  {Weapon = "Watermelon";};
        if (x==7)  {Weapon = "Formal Stationary";};
    };
    if (Specibus=="rakeKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Pitchfork";};
        if (x==2)  {Weapon = "Hoe";};
        if (x==3)  {Weapon = "Fine-tooth Rake";};
        if (x==4)  {Weapon = "Wide-tooth Rake";};
        if (x==5)  {Weapon = "Comb";};
    };
    if (Specibus=="plankKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Board with a Nail in it";};
        if (x==2)  {Weapon = "Mahogany Board";};
        if (x==3)  {Weapon = "Aged Oak Board";};
        if (x==4)  {Weapon = "Teak Board";};
        if (x==5)  {Weapon = "Marble Countertop";};
        if (x==6)  {Weapon = "Board with a Face on it";};
    };
    if (Specibus=="forkKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Salad Fork";};
        if (x==2)  {Weapon = "Dinner Fork";};
        if (x==3)  {Weapon = "Bent Fork";};
        if (x==4)  {Weapon = "Two-tined Fork";};
        if (x==5)  {Weapon = "Trident";};
        if (x==6)  {Weapon = "Pitchfork";};
    };
    if (Specibus=="caneKind")  {
        x = rand() % (10) + 1;
        if (x==1)  {Weapon = "Ivory Cane";};
        if (x==2)  {Weapon = "Sword Cane";};
        if (x==3)  {Weapon = "Teak Cane";};
        if (x==4)  {Weapon = "Steel Cane";};
        if (x==5)  {Weapon = "Walking Stick";};
        if (x==6)  {Weapon = "Staff";};
        if (x==7)  {Weapon = "1/2 Cane";};
        if (x==8)  {Weapon = "Scepter";};
        if (x==9)  {Weapon = "Tapdancing Cane";};
        if (x==10)  {Weapon = "Cheerleader Baton";};
    };
    if (Specibus=="chainKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Thick Metal Chain";};
        if (x==2)  {Weapon = "Jewelry Chain";};
        if (x==3)  {Weapon = "Plastic Chain";};
        if (x==4)  {Weapon = "Chain Letter";};
    };
    if (Specibus=="tablelegKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Wooden Table Leg";};
        if (x==2)  {Weapon = "Aluminum Table Leg";};
        if (x==3)  {Weapon = "Incredibly Ornate Table Leg";};
        if (x==4)  {Weapon = "Metal Chair Leg";};
        if (x==5)  {Weapon = "Plastic Table Leg";};
        if (x==6)  {Weapon = "Office Chair Base";};
    };
    if (Specibus=="peprmillKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Salt Shaker";};
        if (x==2)  {Weapon = "Garlic Mill";};
        if (x==3)  {Weapon = "Coffee Grinder";};
        if (x==4)  {Weapon = "Electric Coffee Grinder";};
        if (x==5)  {Weapon = "Mortar and Pestle";};
        if (x==6)  {Weapon = "Peppermill";};
        if (x==7)  {Weapon = "Dale Earnhardt Commemorative Peppermill";};
    };
    if (Specibus=="hckystckKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Hockey Stick";};
        if (x==2)  {Weapon = "Large Crowbar";};
        if (x==3)  {Weapon = "9-Iron";};
        if (x==4)  {Weapon = "Casey Jones Commemorative Hockey Stick";};
    };
    if (Specibus=="vacuumKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Hand Vacuum";};
        if (x==2)  {Weapon = "Standing Vacuum";};
        if (x==3)  {Weapon = "Antique Vacuum";};
        if (x==4)  {Weapon = "Vacuum Tube";};
    };
    if (Specibus=="mopKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Mop";};
        if (x==2)  {Weapon = "Wig";};
        if (x==3)  {Weapon = "Shitty Mop";};
    };
    if (Specibus=="trophyKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Bowling Trophy";};
        if (x==2)  {Weapon = "Golfing Trophy";};
        if (x==3)  {Weapon = "Treasured Memorabilia";};
    };
    if (Specibus=="ladleKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Soup Ladle";};
        if (x==2)  {Weapon = "Shitty Soup Ladle";};
        if (x==3)  {Weapon = "Archimedes Commemorative Soup Ladle";};
    };
    if (Specibus=="cordKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Extension Cord";};
        if (x==2)  {Weapon = "Shoelace";};
        if (x==3)  {Weapon = "Climbing Rope";};
        if (x==4)  {Weapon = "Headphone Cord";};
        if (x==5)  {Weapon = "Power Cord";};
        if (x==6)  {Weapon = "TV Cord";};
    };
    if (Specibus=="sawKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Electric Saw";};
        if (x==2)  {Weapon = "Handsaw";};
        if (x==3)  {Weapon = "Serrated Knife";};
        if (x==4)  {Weapon = "Horror DVD";};
        if (x==5)  {Weapon = "Large Metal Saw";};
        if (x==6)  {Weapon = "Bonesaw";};
    };
    if (Specibus=="cleaverKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Cleaver";};
        if (x==2)  {Weapon = "Rusty Old Cleaver";};
        if (x==3)  {Weapon = "Antique Chinese Cleaver";};
    };
    if (Specibus=="iceskateKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Shitty Iceskates";};
        if (x==2)  {Weapon = "Iceskates";};
        if (x==3)  {Weapon = "Rollerblades";};
    };
    if (Specibus=="bookKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Large Medical Tome";};
        if (x==2)  {Weapon = "Unabridged Dictionary";};
        if (x==3)  {Weapon = "Sassacre's Daunting Tome";};
        if (x==4)  {Weapon = "Encyclopedia";};
        if (x==5)  {Weapon = "Self-Help Pamphlet";};
        if (x==6)  {Weapon = "Journal";};
    };
    if (Specibus=="bustKind")  {
        x = rand() % (8) + 1;
        if (x==1)  {Weapon = "Greek Muse Bust";};
        if (x==2)  {Weapon = "Musician Bust";};
        if (x==3)  {Weapon = "Disney Villain Bust";};
        if (x==4)  {Weapon = "Scientist Bust";};
        if (x==5)  {Weapon = "Historical Figure Bust";};
        if (x==6)  {Weapon = "Narcissistic Bust";};
        if (x==7)  {Weapon = "Marble Bust";};
        if (x==8)  {Weapon = "Actor Bust";};
    };
    if (Specibus=="pipeKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "PVC Pipe";};
        if (x==2)  {Weapon = "Corncob Pipe";};
        if (x==3)  {Weapon = "Lead Pipe";};
    };
    if (Specibus=="tongsKind")  {
        x = rand() % (1) + 1;
        if (x==1)  {Weapon = "Smith's Tongs";};
        if (x==2)  {Weapon = "Pliers";};
        if (x==3)  {Weapon = "Frightening Dentistry Tool";};
        if (x==4)  {Weapon = "Salad Tongs";};
    };
    if (Specibus=="fireextKind")  {
        x = rand() % (5) + 1;
        if (x==1)  {Weapon = "Carbon Dioxide Extinguisher";};
        if (x==2)  {Weapon = "Foam Extinguisher";};
        if (x==3)  {Weapon = "Chemical Extinguisher";};
        if (x==4)  {Weapon = "Bucket of Water";};
        if (x==5)  {Weapon = "Bucket of Sand";};
    };
    if (Specibus=="bowlngpinKind")  {
        x = rand() % (2) + 1;
        if (x==1)  {Weapon = "Bowling Pin";};
        if (x==2)  {Weapon = "Juggling Club";};
    };
    if (Specibus=="woodwindKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Oboe";};
        if (x==2)  {Weapon = "Piccolo";};
        if (x==3)  {Weapon = "Clarinet";};
        if (x==4)  {Weapon = "Pan Pipes";};
    };
    if (Specibus=="candlstckKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Candelabra";};
        if (x==2)  {Weapon = "Wrought Iron Candlestick";};
        if (x==3)  {Weapon = "Tealight Holder";};
        if (x==4)  {Weapon = "Silver Candlestick";};
    };
    if (Specibus=="paddleKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Pastry Paddle";};
        if (x==2)  {Weapon = "Boat Oar";};
        if (x==3)  {Weapon = "1/2 Paddleball";};
        if (x==4)  {Weapon = "Tennis Racket";};
        if (x==5)  {Weapon = "Ping Pong Paddle";};
        if (x==6)  {Weapon = "Mixing Spoon";};
    };
    if (Specibus=="barbwireKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Barbed Wire Circlet";};
        if (x==2)  {Weapon = "Barbed Wire Whip";};
        if (x==3)  {Weapon = "Barbed Wire Club";};
    };
    if (Specibus=="dartKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Lawn Dart";};
        if (x==2)  {Weapon = "Throwing Dart";};
        if (x==3)  {Weapon = "Tranquilizer Dart";};
    };
    if (Specibus=="marbleKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Swirly Glass Marble";};
        if (x==2)  {Weapon = "Clear Glass Marble";};
        if (x==3)  {Weapon = "Shooter Marble";};
        if (x==4)  {Weapon = "Colored Marble";};
        if (x==5)  {Weapon = "Marble Countertop";};
        if (x==6)  {Weapon = "Marble Bust";};
    };
    if (Specibus=="chiselKind")  {
        x = rand() % (2) + 1;
        if (x==1)  {Weapon = "Wood Chisel";};
        if (x==2)  {Weapon = "Metal Chisel";};
    };
    if (Specibus=="aerosolKind")  {
        x = rand() % (6) + 1;
        if (x==1)  {Weapon = "Bugspray";};
        if (x==2)  {Weapon = "Pepperspray";};
        if (x==3)  {Weapon = "Axe Body Spray";};
        if (x==4)  {Weapon = "Canned Whip Cream";};
        if (x==5)  {Weapon = "Cheez-Whiz";};
        if (x==6)  {Weapon = "Hairspray";};
    };
    if (Specibus=="shoeKind")  {
        x = rand() % (9) + 1;
        if (x==1)  {Weapon = "Tapdancing Shoes";};
        if (x==2)  {Weapon = "Steel-toed Shoes";};
        if (x==3)  {Weapon = "Diving Flippers";};
        if (x==4)  {Weapon = "Ballerina Slippers";};
        if (x==5)  {Weapon = "Sneakers";};
        if (x==6)  {Weapon = "Rollerblades";};
        if (x==7)  {Weapon = "Toesocks";};
        if (x==8)  {Weapon = "Animal Slippers";};
        if (x==9)  {Weapon = "Hiking Boots";};
    };
    if (Specibus=="puppetKind")  {
        x = rand() % (1) + 1;
        if (x==1)  {Weapon = "Creepy Doll";};
        if (x==2)  {Weapon = "Sock Puppet";};
        if (x==3)  {Weapon = "Muppet";};
        if (x==4)  {Weapon = "Smuppet";};
        if (x==5)  {Weapon = "Ventriloquist's Dummy";};
    };
    if (Specibus=="coatKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Sweatshirt";};
        if (x==2)  {Weapon = "Weighted Coat";};
        if (x==3)  {Weapon = "Armored Coat";};
        if (x==4)  {Weapon = "Jacket";};
    };
    if (Specibus=="plierKind")  {
        x = rand() % (3) + 1;
        if (x==1)  {Weapon = "Needle-nose Pliers";};
        if (x==2)  {Weapon = "Roundtip Pliers";};
        if (x==3)  {Weapon = "Wirecutters";};
    };
    if (Specibus=="fanKind")  {
        x = rand() % (4) + 1;
        if (x==1)  {Weapon = "Paper Fan";};
        if (x==2)  {Weapon = "Electric Fan";};
        if (x==3)  {Weapon = "Handheld Electric Fan";};
        if (x==4)  {Weapon = "Steel Folding Fan";};
    };
    if (Specibus=="brassKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Brass Knuckles";};
        if (x==2)  {Weapon = "Saxophone";};
        if (x==3)  {Weapon = "Trumpet";};
        if (x==4)  {Weapon = "Trombone";};
        if (x==5)  {Weapon = "Tuba";};
        if (x==6)  {Weapon = "Brass Sword";};
        if (x==7)  {Weapon = "Brass Hammer";};
    };
    if (Specibus=="rockKind")  {
        x = rand() % (7) + 1;
        if (x==1)  {Weapon = "Dwayne Johnson Action Figure";};
        if (x==2)  {Weapon = "Stone";};
        if (x==3)  {Weapon = "Rock";};
        if (x==4)  {Weapon = "Boulder";};
        if (x==5)  {Weapon = "Electric Guitar";};
        if (x==6)  {Weapon = "Bitchin' Guitar";};
        if (x==7)  {Weapon = "Pebble";};
    };
    return Weapon;
}


string GetSpecibus() {

int x;
string Specibus = "";
x = rand() % (84);

if (x==0)  {Specibus = "bladeKind";};
if (x==1)  {Specibus = "pistolKind";};
if (x==2)  {Specibus = "offcespplyKind";};
if (x==3)  {Specibus = "gloveKind";};
if (x==4)  {Specibus = "axeKind";};
if (x==5)  {Specibus = "fncysntaKind";};
if (x==6)  {Specibus = "whipKind";};
if (x==7)  {Specibus = "hammerKind";};
if (x==8)  {Specibus = "clubKind";};
if (x==9)  {Specibus = "clawKind";};
if (x==10) {Specibus = "chainsawKind";};
if (x==11) {Specibus = "makeupKind";};
if (x==12) {Specibus = "umbrellaKind";};
if (x==13) {Specibus = "scytheKind";};
if (x==14) {Specibus = "spearKind";};
if (x==15) {Specibus = "needleKind";};
if (x==16) {Specibus = "bowKind";};
if (x==17) {Specibus = "diceKind";};
if (x==18) {Specibus = "2x3dentKind";};
if (x==19) {Specibus = "guitarKind";};
if (x==20) {Specibus = "knifeKind";};
if (x==21) {Specibus = "grenadeKind";};
if (x==22) {Specibus = "staffKind";};
if (x==23) {Specibus = "rifleKind";};
if (x==24) {Specibus = "maceKind";};
if (x==25) {Specibus = "explosivesKind";};
if (x==26) {Specibus = "projectileKind";};
if (x==27) {Specibus = "wrenchKind";};
if (x==28) {Specibus = "screwdriverKind";};
if (x==29) {Specibus = "pizzactrKind";};
if (x==30) {Specibus = "batKind";};
if (x==31) {Specibus = "rollpinKind";};
if (x==32) {Specibus = "yoyoKind";};
if (x==33) {Specibus = "scissorKind";};
if (x==34) {Specibus = "peprspryKind";};
if (x==35) {Specibus = "crowbarKind";};
if (x==36) {Specibus = "broomKind";};
if (x==37) {Specibus = "pokerKind";};
if (x==38) {Specibus = "icepickKind";};
if (x==39) {Specibus = "golfclubKind";};
if (x==40) {Specibus = "ropeKind";};
if (x==41) {Specibus = "shovelKind";};
if (x==42) {Specibus = "spoonKind";};
if (x==43) {Specibus = "statueKind";};
if (x==44) {Specibus = "spatulaKind";};
if (x==45) {Specibus = "lampKind";};
if (x==46) {Specibus = "ballKind";};
if (x==47) {Specibus = "rakeKind";};
if (x==48) {Specibus = "plankKind";};
if (x==49) {Specibus = "forkKind";};
if (x==50) {Specibus = "caneKind";};
if (x==51) {Specibus = "chainKind";};
if (x==52) {Specibus = "tablelegKind";};
if (x==53) {Specibus = "peprmillKind";};
if (x==54) {Specibus = "hckystckKind";};
if (x==55) {Specibus = "vacuumKind";};
if (x==56) {Specibus = "mopKind";};
if (x==57) {Specibus = "trophyKind";};
if (x==58) {Specibus = "ladleKind";};
if (x==59) {Specibus = "cordKind";};
if (x==60) {Specibus = "sawKind";};
if (x==61) {Specibus = "cleaverKind";};
if (x==62) {Specibus = "iceskateKind";};
if (x==63) {Specibus = "bookKind";};
if (x==64) {Specibus = "bustKind";};
if (x==65) {Specibus = "pipeKind";};
if (x==66) {Specibus = "tongsKind";};
if (x==67) {Specibus = "fireextKind";};
if (x==68) {Specibus = "bowlngpinKind";};
if (x==69) {Specibus = "woodwindKind";};
if (x==70) {Specibus = "candlstckKind";};
if (x==71) {Specibus = "paddleKind";};
if (x==72) {Specibus = "barbwireKind";};
if (x==73) {Specibus = "dartKind";};
if (x==74) {Specibus = "marbleKind";};
if (x==75) {Specibus = "chiselKind";};
if (x==76) {Specibus = "aerosolKind";};
if (x==77) {Specibus = "shoeKind";};
if (x==78) {Specibus = "puppetKind";};
if (x==79) {Specibus = "coatKind";};
if (x==80) {Specibus = "plierKind";};
if (x==81) {Specibus = "fanKind";};
if (x==82) {Specibus = "brassKind";};
if (x==83) {Specibus = "rockKind";};

    return Specibus;
}
