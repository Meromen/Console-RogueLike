#include<iostream>
#include<string>
#include<vector>
#include"Interface.h"
using namespace std;


int roll() {
	return 1 + rand() % 6;
}

int main() {

	vector<Player> v_players;
	v_players.push_back(Player("Bob", true));
	v_players.push_back(Player("Fred", true));
	v_players.push_back(Player("Andy", true));
	v_players.push_back(Player("Dennis", true));


	int i_command = 0;
	int i_roll = 1;
	bool b_quit = false;
	Interface if_inteface = Interface();


	while (!b_quit) {
		
		cout << s_map << "\n\n";
		cout << s_menu << "\n";

		cin >> i_command;


		if (i_command == 1){
			i_roll = roll();
			cout << v_cubeEdges[i_roll - 1] << "\n";
		} 
		else if (i_command == 2) {
			cout << "smth" << "\n";
		} 
		else {
			cout << "Govno key" << "\n";
		}
	}

	system("PAUSE");

	return 0;
}