#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include"Interface.h"
using namespace std;


int rollEdge() {
	return 1 + rand() % 6;
}

int main() {

	vector<Player> players;
	players.push_back(Player("Bob", true));
	players.push_back(Player("Fred", true));
	players.push_back(Player("Andy", true));
	players.push_back(Player("Dennis", true));


	int command = 0;
	int roll = 1;
	bool quit = false;
	Interface gameInterface = Interface();
	queue<string> drawQueue;
	drawQueue.push(gameInterface.getTitle());
	drawQueue.push(gameInterface.getMap());
	drawQueue.push(gameInterface.getMenu());

	while (!quit) {
		system("clear");

		while (!drawQueue.empty()) {
			cout << drawQueue.front();
			drawQueue.pop();
		}	
	
		cin >> command;

		switch (command)
		{
			case 1:
				drawQueue.push(gameInterface.getTitle());
				drawQueue.push(gameInterface.getMap());
				drawQueue.push(gameInterface.getCube()[rollEdge() - 1]);
				drawQueue.push(gameInterface.getMenu());
				break;
			case 2:
				drawQueue.push(gameInterface.getTitle());
				drawQueue.push(gameInterface.getStatsInfo(players[1]));
				break;
			case 0:
				quit = true;
				break;
			default:
				drawQueue.push(gameInterface.getTitle());
				drawQueue.push(gameInterface.getMap());
				drawQueue.push("Invalid Input");	
				drawQueue.push(gameInterface.getMenu());
				break;
		}
	}

	system("PAUSE");

	return 0;
}