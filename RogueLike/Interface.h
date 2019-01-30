#pragma once
#include<string>
#include<vector>
#include<iostream>
#include"Player.h"
using namespace std;

class Interface
{
private:
    string s_map;
	string s_menu;
    string s_statsInfo;
    vector<string> v_cubeEdges;
public:
    Interface();
    ~Interface();
    vector<string> getCube();
    string getMap();
    string getMenu();

    void printEdge(int edge);
    void printMap();
    void printMenu();
    void printStatsInfo(Player &player);
};

Interface::Interface(){
    s_map = "";
	s_menu = "";	
    s_statsInfo = "";

	string s_rollOne;
	string s_rollTwo;
	string s_rollThree;
	string s_rollFour;
	string s_rollFive;
	string s_rollSix;

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
	s_map += "################################################################################\n\n";

	s_menu = "0. Exit    1. Roll    2. Wait\n";

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

	v_cubeEdges.push_back(s_rollOne);
	v_cubeEdges.push_back(s_rollTwo);
	v_cubeEdges.push_back(s_rollThree);
	v_cubeEdges.push_back(s_rollFour);
	v_cubeEdges.push_back(s_rollFive);
	v_cubeEdges.push_back(s_rollSix);
}

Interface::~Interface() {

}

vector<string> Interface::getCube() {
    return this->v_cubeEdges;
}

string Interface::getMap() {
    return this->s_map;
}

string Interface::getMenu() {
    return this->s_menu;
}

void Interface::printMap() {
    cout << this->s_map << "\n\n";
}

void Interface::printEdge(int edge) {
    cout << this->v_cubeEdges[edge] << "\n";
}

void Interface::printMenu() {
    cout << this->s_menu << "\n";
}

void Interface::printStatsInfo(Player &player) {
    Stats* playerStats;

	cout << playerStats->statsToString();    
}