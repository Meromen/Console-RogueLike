#pragma once
#include<string>
#include"Stats.h"

using namespace std;

class Player
{
private:
	Stats st_stats;
	int i_lvl;
	string s_name;
	bool b_isHuman;
public:
	Player(string name, bool isHuman);
	virtual ~Player();
	Stats* getStats();
};


Player::Player(string name, bool isHuman) {
	st_stats = Stats();
	i_lvl = 1;
	s_name = name;
	b_isHuman = isHuman;
}


Player::~Player() {

}

Stats* Player::getStats() {
	return &this->st_stats;
}