#include<iostream>
#include<string>
#include<vector>
#include"Player.h"
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

	string s_map = "";
	string s_menu = "";
	string s_rollOne = "";
	string s_rollTwo = "";
	string s_rollThree = "";
	string s_rollFour = "";
	string s_rollFive = "";
	string s_rollSix = "";


	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";
	s_map += "################################################################################";

	s_menu = "0. Exit    1. Roll    2. Wait";

	s_rollOne += "#####\n";
	s_rollOne += "#####\n";
	s_rollOne += "##o##\n";
	s_rollOne += "#####\n";
	s_rollOne += "#####\n";

	s_rollTwo += "#####\n";
	s_rollTwo += "#####\n";
	s_rollTwo += "#o#o#\n";
	s_rollTwo += "#####\n";
	s_rollTwo += "#####\n";

	s_rollThree += "#####\n";
	s_rollThree += "#o###\n";
	s_rollThree += "##o##\n";
	s_rollThree += "###o#\n";
	s_rollThree += "#####\n";

	s_rollFour += "#####\n";
	s_rollFour += "#o#o#\n";
	s_rollFour += "#####\n";
	s_rollFour += "#o#o#\n";
	s_rollFour += "#####\n";

	s_rollFive += "#####\n";
	s_rollFive += "#o#o#\n";
	s_rollFive += "##o##\n";
	s_rollFive += "#o#o#\n";
	s_rollFive += "#####\n";

	s_rollSix += "#####\n";
	s_rollSix += "#ooo#\n";
	s_rollSix += "#####\n";
	s_rollSix += "#ooo#\n";
	s_rollSix += "#####\n";

	
	
	vector<string> v_cubeEdges;
	v_cubeEdges.push_back(s_rollOne);
	v_cubeEdges.push_back(s_rollTwo);
	v_cubeEdges.push_back(s_rollThree);
	v_cubeEdges.push_back(s_rollFour);
	v_cubeEdges.push_back(s_rollFive);
	v_cubeEdges.push_back(s_rollSix);

	int i_command = 0;
	int i_roll = 1;
	bool b_quit = false;

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