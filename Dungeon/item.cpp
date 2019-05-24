﻿#include"pch.h"
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include"item.h"

material fist;
material sword;
material noArmor;
material leatherArmor;
material nothing;

void WeaponOption() {
	//拳
	strcpy(fist.name, "fist");
	fist.mateTag = WEAPON;
	fist.weaponType = FIST;
	fist.value = 0;
	fist.flag = true;


	//剣
	strcpy(sword.name, "long sword");
	sword.mateTag = WEAPON;
	sword.weaponType = SWORD;
	sword.value = 15;
	sword.flag = true;
}
void ArmorOption() {
	//裸體
	strcpy(noArmor.name, "no armor");
	noArmor.mateTag = ARMOR;
	noArmor.armorType = NO_ARMOR;
	noArmor.value = 0;
	noArmor.def = 0;
	noArmor.maxHp = 0;
	noArmor.hp = noArmor.maxHp;
	noArmor.flag = true;

	//皮甲
	strcpy(leatherArmor.name, "leather armor");
	leatherArmor.mateTag = ARMOR;
	leatherArmor.armorType = LEATHER_ARMOR;
	leatherArmor.value = 30;
	leatherArmor.flag = true;
	leatherArmor.maxHp = 40;
	leatherArmor.hp = leatherArmor.maxHp;
	leatherArmor.def = 0.3f;
}
void CreateVoid() {
	strcpy(nothing.name, "nothing");
	nothing.mateTag = NOTHING;
	nothing.value = 0;
	nothing.flag = false;
}

