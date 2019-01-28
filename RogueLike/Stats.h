#pragma once

#define START_DMG 5
#define START_CHANCE_HIT 50
#define START_MOVE_SPEED 5
#define START_CHANCE_BLOCK 20
#define START_HP 20
#define START_CHANCE_TAUNT 20
#define START_SHOP_DISCOUNT 0
#define START_MP 10
#define START_MP_RESORE 6
#define START_SPELL_DMG 5

#define SCALE_DMG_STR 2
#define SCALE_CHANCE_HIT_ATK 2
#define SCALE_MOVE_SPEED_AGL 1
#define SCALE_CHANCE_BLOCK_DEF 2
#define SCALE_HP_VIT 5
#define SCALE_CHANCE_TAUNT_CHR 2
#define SCALE_SHOP_DISCOUNT_CHR 1
#define SCALE_MP_STM 3
#define SCALE_MP_RESTORE_STM 5
#define SCALE_MP_MGK 10
#define SCALE_SPELL_DMG_MGK 10

class Stats
{
private:
	int i_strength;
	int i_magicka;
	int i_agility;
	int i_vitality;
	int i_attack;
	int i_defence;
	int i_charisma;
	int i_stamina;
	
	int i_hp;
	int i_mp;
	int i_dmg;
	int i_moveSpeed;
	int i_chanceHit;
	int i_chanceBlock;
	int i_chanceTaunt;
	int i_shopDiscount;
	int i_mpRestore;
	int i_spellDmg;

public:
	Stats();
	virtual ~Stats();
	void updateStats();

	void setStrength(int val);
	void setMagica(int val);
	void setAgility(int val);
	void setVitality(int val);
	void setAttack(int val);
	void setDefence(int val);
	void setCharisma(int val);
	void setStamina(int val);
	void setHp(int val);
	void setMp(int val);
	void setDmg(int val);
	void setMoveSpeed(int val);
	void setChanceHit(int val);
	void setChanceBlock(int val);
	void setChanceTaunt(int val);
	void setShopDiscount(int val);
	void setMpRestore(int val);
	void setSpellDmg(int val);

	int getStrength();
	int getMagica();
	int getAgility();
	int getVitality();
	int getAttack();
	int getDefence();
	int getCharisma();
	int getStamina();
	int getHp();
	int getMp();
	int getDmg();
	int getMoveSpeed();
	int getChanceHit();
	int getChanceBlock();
	int getChanceTaunt();
	int getShopDiscount();
	int getMpRestore();
	int getSpellDmg();
};


Stats::Stats(){
	i_strength = 1;
	i_strength = 1;
	i_magicka = 1;
	i_agility = 1;
	i_vitality = 1;
	i_attack = 1;
	i_defence = 1;
	i_charisma = 1;
	i_stamina = 1;

	Stats::updateStats();
}


Stats::~Stats(){

}

void Stats::updateStats() {
	i_hp = START_HP + this->i_vitality * SCALE_HP_VIT;
	i_mp = START_MP + this->i_stamina * SCALE_MP_STM + this->i_magicka * SCALE_MP_MGK;
	i_dmg = START_DMG + this->i_strength * SCALE_DMG_STR;
	i_moveSpeed = START_MOVE_SPEED + this->i_agility * SCALE_MOVE_SPEED_AGL;
	i_chanceHit = START_CHANCE_HIT + this->i_attack * SCALE_CHANCE_HIT_ATK;
	i_chanceBlock = START_CHANCE_BLOCK + this->i_defence * SCALE_CHANCE_BLOCK_DEF;
	i_chanceTaunt = START_CHANCE_TAUNT + this->i_charisma * SCALE_CHANCE_TAUNT_CHR;
	i_shopDiscount = START_SHOP_DISCOUNT + this->i_charisma * SCALE_SHOP_DISCOUNT_CHR;
	i_mpRestore = START_MP_RESORE + this->i_stamina * SCALE_MP_RESTORE_STM;
	i_spellDmg = START_SPELL_DMG + this->i_magicka * SCALE_SPELL_DMG_MGK;
}

void Stats::setStrength(int val) {
	this->i_strength = val;
}

void Stats::setMagica(int val) {
	this->i_magicka = val;	
}

void Stats::setAgility(int val) {
	this->i_agility = val;
}

void Stats::setVitality(int val) {
	this->i_vitality = val;
}

void Stats::setAttack(int val) {
	this->i_attack = val;
}

void Stats::setDefence(int val) {
	this->i_defence = val;
}

void Stats::setCharisma(int val) {
	this->i_charisma = val;
}

void Stats::setStamina(int val) {
	this->i_stamina = val;
}

void Stats::setHp(int val) {
	this->i_hp = val;
}

void Stats::setMp(int val) {
	this->i_mp = val;
}

void Stats::setDmg(int val) {
	this->i_dmg = val;
}

void Stats::setMoveSpeed(int val) {
	this->i_moveSpeed = val;
}

void Stats::setChanceHit(int val) {
	this->i_chanceHit = val;
}

void Stats::setChanceBlock(int val) {
	this->i_chanceBlock = val;
}

void Stats::setChanceTaunt(int val) {
	this->i_chanceTaunt = val;
}

void Stats::setShopDiscount(int val) {
	this->i_shopDiscount = val;
}

void Stats::setMpRestore(int val) {
	this->i_mpRestore = val;
}

void Stats::setSpellDmg(int val) {
	this->i_spellDmg = val;
}

int Stats::getStrength() {
	return this->i_strength;
}

int Stats::getMagica() {
	return this->i_magicka;
}

int Stats::getAgility() {
	return this->i_agility;
}

int Stats::getVitality() {
	return this->i_vitality;
}

int Stats::getAttack() {
	return this->i_attack;
}

int Stats::getDefence() {
	return this->i_defence;
}

int Stats::getCharisma() {
	return this->i_charisma;
}

int Stats::getStamina() {
	return this->i_stamina;
}

int Stats::getHp(){
	return this->i_hp;
}

int Stats::getMp() {
	return this->i_mp;
}

int Stats::getDmg() {
	return this->i_dmg;
}

int Stats::getMoveSpeed() {
	return this->i_moveSpeed;
}

int Stats::getChanceHit() {
	return this->i_chanceHit;
}

int Stats::getChanceBlock() {
	return this->i_chanceBlock;
}

int Stats::getChanceTaunt() {
	return this->i_chanceTaunt;
}

int Stats::getShopDiscount() {
	return this->i_shopDiscount;
}

int Stats::getMpRestore() {
	return this->i_mpRestore;
}

int Stats::getSpellDmg() {
	return this->i_spellDmg;
}
