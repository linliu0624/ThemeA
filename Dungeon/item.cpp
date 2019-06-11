﻿/*
*作者：横林
*/
#include"pch.h"
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include"item.h"

material fist;
material sword;
material spear;
material axe;

material noArmor;
material leatherArmor;
material heavyLeatherArmor;
material nothing;

material simplePotion;

void WeaponInit() {
	//拳
	strcpy(fist.name, "fist");
	strcpy(fist.text, "~ Just hands, attack distance is one. atk=1~4 ~");
	fist.mateTag = WEAPON;
	fist.weaponType = FIST;
	fist.value = 0;
	fist.weight = 0.0f;
	fist.flag = true;


	//剣
	strcpy(sword.name, "long sword");
	sword.mateTag = WEAPON;
	sword.weaponType = LONG_SWORD;
	sword.value = 15;
	sword.weight = 2.0f;
	sword.flag = true;

	//斧
	strcpy(axe.name, "axe");
	axe.mateTag = WEAPON;
	axe.weaponType = AXE;
	axe.value = 20;
	axe.weight = 2.5f;
	axe.flag = true;

	//槍
	strcpy(spear.name, "spear");
	spear.mateTag = WEAPON;
	spear.weaponType = SPEAR;
	spear.value = 20;
	spear.weight = 3.5f;
	spear.flag = true;
}
void ArmorInit() {
	//裸体
	strcpy(noArmor.name, "no armor");
	noArmor.mateTag = ARMOR;
	noArmor.armorType = NO_ARMOR;
	noArmor.value = 0;
	noArmor.def = 0;
	noArmor.maxHp = 0;
	noArmor.hp = noArmor.maxHp;
	noArmor.weight = 0.0f;
	noArmor.flag = true;

	//皮甲
	strcpy(leatherArmor.name, "leather armor");
	leatherArmor.mateTag = ARMOR;
	leatherArmor.armorType = LEATHER_ARMOR;
	leatherArmor.value = 30;
	leatherArmor.flag = true;
	leatherArmor.maxHp = 40;
	leatherArmor.hp = leatherArmor.maxHp;
	leatherArmor.def = 0.33f;
	leatherArmor.weight = 6.0f;

	//重皮甲
	strcpy(heavyLeatherArmor.name, "hLeather armor");
	heavyLeatherArmor.mateTag = ARMOR;
	heavyLeatherArmor.armorType = HEAVY_LEATHE_RARMOR;
	heavyLeatherArmor.value = 35;
	heavyLeatherArmor.flag = true;
	heavyLeatherArmor.maxHp = 30;
	heavyLeatherArmor.hp = heavyLeatherArmor.maxHp;
	heavyLeatherArmor.def = 0.4f;
	heavyLeatherArmor.weight = 8.5f;
}
void ItemInit() {
	strcpy(simplePotion.name, "simple potion");
	strcpy(simplePotion.text, "Use to +10 hp");
	simplePotion.mateTag = ITEM;
	simplePotion.itemType = SIMPLE_POTION;
	simplePotion.value = 40;
	simplePotion.flag = true;
	simplePotion.hp = 10;
	simplePotion.weight = 0.2f;
}
void CreateEmpty() {
	strcpy(nothing.name, "nothing");
	nothing.mateTag = NOTHING;
	nothing.value = 0;
	nothing.flag = false;
}
/*
*ダメージの計算
*int weaponType　武器のタイプ
*/
int Damage(int weaponType) {
	int dice4 = rand() % 4 + 1;
	int dice6 = rand() % 6 + 1;
	int dice8 = rand() % 8 + 1;
	int dice10 = rand() % 10 + 1;
	int dice20 = rand() % 20 + 1;

	if (weaponType == FIST)
		return dice4; //1~4
	else if (weaponType == LONG_SWORD)
		return dice4 + 1; //2~5
	else if (weaponType == AXE)
		return dice6 + 2; //3~8
	else
		return dice4;
}

