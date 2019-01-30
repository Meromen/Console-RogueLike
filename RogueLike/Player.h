#pragma once
#include<string>
#include<iostream>
#include"Stats.h"

using namespace std;

class Player
{
private:
	Stats st_stats;
	int i_lvl;
	int i_exp;
	int i_needExp;
	string s_name;
	bool b_isHuman;
public:
	Player(string name, bool isHuman);
	virtual ~Player();
	Stats* getStats();
	void lvlUp();
	void checkStatus();
};

Player::Player(string name, bool isHuman) {
	st_stats = Stats();
	i_lvl = 1;
	i_exp = 0;
	i_needExp = 1000;
	s_name = name;
	b_isHuman = isHuman;
}

Player::~Player() {

}

Stats* Player::getStats() {
	return &this->st_stats;
}

void Player::lvlUp() {
	int skillPoints = 2;
	string 	lvlUpMenu = "";
	
	lvlUpMenu += "Choose the stat you want to increase \n";
	lvlUpMenu += "1: Strength   2: Magica   3: Agility   4: Vitality \n";
	lvlUpMenu += "5: Attack     6: Defence  7: Charisma  8: Stamina \n";
	while (skillPoints != 0){
		int skillInput = 0;
		cout << this->getStats()->statsToString() << lvlUpMenu;
		cin >> skillInput;
		 
		switch (skillInput)
		{
			case 1:
				this->getStats()->increaseStrength();
				skillPoints--;
				break;
			case 2:
				this->getStats()->increaseMagica();
				skillPoints--;
				break;
			case 3:
				this->getStats()->increaseAgility();
				skillPoints--;
				break;
			case 4: 
				this->getStats()->increaseVitality();
				skillPoints--;
				break;
			case 5: 
				this->getStats()->increaseAttack();
				skillPoints--;
				break;
			case 6:
				this->getStats()->increaseDefence();
				skillPoints--;
				break;
			case 7:			
				this->getStats()->increaseCharisma();
				skillPoints--;
				break;
			case 8:
				this->getStats()->increaseStamina();
				skillPoints--;
				break;
			default:
				cout << "Invalid value";
				break;
		}
	} 
}

void  Player::checkStatus() {
	if (this->i_exp >= this->i_needExp) {
		this->lvlUp();
	}
}
