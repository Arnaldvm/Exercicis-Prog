#ifndef __ENTITYMANAGER_H__
#define __ENTITYMANAGER_H__

#include <stdio.h>

class EntityManager {
public:
	...
	int Distance(Entity *u1, Entity *u2);
	Entity* GetEnemy();
	bool Surrender();
private:
	...
	Entity Player, *Enemies;
	int num_enemies;
}

class Entity {
public:
	int x, y;       //position
	int hp;        //health points
	bool stunned;  //active?
}


Entity* EntityManager::GetEnemy() {
	
	for (int i = 0; i < num_enemies; i++){
		if ()

	}

	return 
}

bool EnetityManager::Surrender() {
	

}



#endif