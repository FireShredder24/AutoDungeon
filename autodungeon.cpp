#include <iostream>
#include <stdlib.h>

using namespace std;
string civloot [50] = {
"5 g",
"5 g",
"5 g",
"3 slime blubber",
"toy",
"toy",
"toy",
"figurine",
"flask of alcohol",
"flask of alcohol",
"flask of alcohol",
"child's shoe",
"amulet",
"amulet",
"amulet",
"small insect",
"small insect",
"feather pen",
"feather pen",
"small rock",
"Inkwell",
"Wad of paper",
"10 silver",
"Hairpin",
"Clothespin",
"Clothespin",
"Candle",
"Flask of water",
"Flask of water",
"Lantern",
"Flask of oil",
"Crust of bread",
"Pipe",
"Pipe",
"Pipe",
"Cat Statue",
"Wedge of cheese",
"Flint & Steel",
"1d8 Garlic Cloves",
"Goat Jerky",
"Beef Jerky",
"Mooshroom Jerky",
"Eel Jerky",
"Fried Eel",
"Tallow Brick",
"Turkey Leg",
"Hematite",
"Ring",
"Earring",
"Earring",
};
string milloot [50] = {
"Belt Buckle",
"5g",
"5g",
"5g",
"3 slime blubber",
"Belt Buckle",
"Belt Buckle",
"Nail",
"Quiver",
"Satchel",
"Pile of coal",
"100' of rope",
"Tinderbox",
"Walking Stick",
"Dice",
"Club",
"Quarterstaff",
"Sickle",
"Chalice",
"Mug",
"Mug",
"Mug",
"Bedroll",
"Brass Knuckles",
"Climbing harness",
"Bag of Dye",
"4 Copper bars",
"Wooden shield",
"Gloves",
"Ring-mail shirt",
"Compass",
"1d20 Darts",
"Pipe",
"Blowgun",
"Holy Water",
"Book",
"Holy Symbol",
"Amulet",
"Amulet",
"Amulet",
"Jerky",
"Fried Fish",
"Dagger",
"Knife",
"Switchblade",
"Spring",
"Stick",
"Torch",
"Torch",
"Torch",
};
void load () {
	
}
class playerchar {
	public:
		int race, att, def, ini, intl, hp, xp;
		int ability [6];
		int clas;
		int baseatt;
		string inv [50];
		int invnum [50];
};
int main () {
	cout << "Welcome to AutoDungeon!\n 1 Load a save file.\n 2 New game.\n 3 Load loot tables.";
	int resp;
	cin >> resp;
	switch (resp) {
		case 1:
			load();
		case 2:
			newgame();
		case 3:
			loadloot();
	}
	return 0;
}
