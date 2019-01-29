#pragma once
#include<string>
#include<vector>
#include<iostream>
#include<Player.h>
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
    Stats* playerStats = player.getStats();    
    this->s_statsInfo += "Strength: " + to_string(playerStats->getStrength());
    this->s_statsInfo += "Magica: " + to_string(playerStats->getMagica());
    this->s_statsInfo += "Agility: " + to_string(playerStats->getAgility());
    this->s_statsInfo += "Vitality: " + to_string(playerStats->getVitality());
    this->s_statsInfo += "Attack: " + to_string(playerStats->getAttack());
    this->s_statsInfo += "Defence: " + to_string(playerStats->getDefence());
    this->s_statsInfo += "Charisma: " + to_string(playerStats->getCharisma());
    this->s_statsInfo += "Stamina: " + to_string(playerStats->getStamina());
    
    this->s_statsInfo += "Hp: " + to_string(playerStats->getHp());
    this->s_statsInfo += "Mp: " + to_string(playerStats->getMp());
    this->s_statsInfo += "Damage: " + to_string(playerStats->getDmg());
    this->s_statsInfo += "MoveSpeed: " + to_string(playerStats->getMoveSpeed());
    this->s_statsInfo += "Chance Hit: " + to_string(playerStats->getChanceHit()) + '%';
    this->s_statsInfo += "Chance Block: " + to_string(playerStats->getChanceBlock()) + '%';
    this->s_statsInfo += "Chance Taunt: " + to_string(playerStats->getChanceTaunt()) + '%';
    this->s_statsInfo += "Shop Discount: " + to_string(playerStats->getShopDiscount());
    this->s_statsInfo += "Mp restore: " + to_string(playerStats->getMpRestore());
    this->s_statsInfo += "Spell Damage: " + to_string(playerStats->getSpellDmg());	
}