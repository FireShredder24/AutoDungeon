#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void load ();
void newgame ();
void loadloot ();
string pathstr;
int i;
int main ();
string loot1 [50] = {
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
string loot2 [50] = {
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
string loot3 [50];
void loadloot () {
	cout << "Please enter a complete path to Loot Table 1: ";
	cin >> pathstr;
	ifstream loadloot;
	loadloot.open(pathstr.c_str(), ios::in);
	if (loadloot.is_open()) {
		string word;
		i=0;
		while (getline (loadloot,word)) {
			loot1 [i] = word;
			i++;
		}
	loadloot.close();
	cout << "Loot table loaded successfully.\n Check it?\n";
	cin >> pathstr;
	if (pathstr == "y") {
		i=0;
		for (int i=0;i<=50;i++) {
			cout << loot1[i] << endl;
		};
	}
	cout << loot1 [1];
	} else {
		cout << "Load failed.  Returning to main menu.";
		main();
	}
}
void load () {
	cout << "Please enter a complete path to the save file.\n";
	string path;
	cin >> path;
	ifstream load;
	load.open (path.c_str(), ios::in);
	if (load.is_open()) {
		string line;
		while ( getline (load,line) )
    	{
   			cout << line << '\n';
  	    }
    load.close();
	}
}
class playerchar (int, int, int, int, int, int, int, int, int, int, int, int, int, int, int){
	public:
		int race, att, def, ini, intl, hp, xp;
		int ability [6];
		int clas;
		int baseatt;
		string inv [50];
		int invnum [50];
};
playerchar::playerchar (int rac, int at, int de, int in, int inl, int hP, int xP, int ab1, int ab2, int ab3, int ab4, int ab5, int ab6, int cla, int batt) {
	race = rac; att = at; def = de; ini = in; intl = inl; hp = hP; xp = xP; ability [1] = ab1; ability [2] = ab2; ability [3] = ab3; ability [4] = ab4; ability [5] = ab5;
}
void initswitch (int response) {
	switch (response) {
		case 1: load(); break;
		case 2: newgame(); break;
		case 3: loadloot(); break;
		default: cout << "Value out of range.  Enter number between 1 and 3.\n"; cin >> response; initswitch (response); break;
	}
}
void newgame () {
	vector<playerchar> player;
	player.clear();
	cout << "Enter \"new\" to create a new player and \"done\" to finish player creation.\n";
	cin >> pathstr;
	if (pathstr == "new") {
		player.push_back();
		cout << "Enter \"file\" to load character from a .txt file or \"manual\" to build character in-terminal.\n";
		cin >> pathstr;
		if (pathstr == "file") {
			cout << "Enter file path: ";
			cin >> pathstr;
			ifstream loadchar (pathstr.c_str(), ios::in);
			if (loadchar.is_open()) {
				cout << "File opened successfully.  Reading...\n";
				string line;
				for (int i=0; i<=115; i++) {
					getline(loadchar, player[player.size()].race);
				}
			}
		}
	} else {
		
	}
}
int main () {
	cout << "Welcome to AutoDungeon!\n 1 Load a save file.\n 2 New game.\n 3 Load loot tables.\n";
	int resp;
	cin >> resp;
	initswitch(resp);
	return 0;
}
