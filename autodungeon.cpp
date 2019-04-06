#include <iostream>
#include <stdlib.h>

using namespace std;
string civloot [50];
string milloot [50];
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
	return 0;
}
