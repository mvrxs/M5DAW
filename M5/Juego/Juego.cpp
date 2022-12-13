#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <conio.h>
#include<Windows.h>
#include<MMSystem.h>

using namespace std;


// Atributos del enemigo
int enemyHP = 300;
string enemyName = "Boo";
bool isAlive = true;
int enemyDamage;

// Atributos del enemigo
int enemyHP2 = 250;
string enemyName2 = "Goomba";
bool isAlive2 = true;
int enemyDamage2;


//Atributos de héroe
string heroName;

int heroDamage;
int heroHP = 700;
int jumpAttack = 80;
int punchAttack = 100;
int fireAttack = 180;
bool heroAlive = true;

int selectEnemy;
int selectWeapon;
int selectWeapon2;
int totalDamageEnemies;
int attackEnemies = totalDamageEnemies;
int leftAttack = 3;

void weapons() {
	switch (selectWeapon) {
	case 1:
		heroDamage = punchAttack;
		enemyDamage = (rand() % 100);
		enemyDamage2 = (rand() % 100);
		totalDamageEnemies = enemyDamage + enemyDamage2;
		heroHP = heroHP - totalDamageEnemies;
		enemyHP = enemyHP - punchAttack;
		if (enemyHP <= 0) {
			cout << "Has matado al enemigo " << enemyName << "\n";
			cout << "El enemigo " << enemyName << " ha muerto\n";
			cout << "El enemigo " << enemyName2 << " le quedan " << enemyHP2 << " puntos de vida\n\n";
			isAlive = false;
			break;
		}
		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP << "HP al enemigo " << enemyName << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage << " puntos de damage\n";
			cout << "Te han atacado a la vez con " << totalDamageEnemies << " puntos de damage\n";
			if (heroHP <= 0) {
				cout << "Te quedan 0 puntos de HP\n\n";
			}
			else {
				cout << "Te quedan " << heroHP << " puntos de HP\n\n";
			}
		}
		break;
	case 2:
		heroDamage = jumpAttack;
		enemyDamage = (rand() % 100);
		enemyDamage2 = (rand() % 100);
		totalDamageEnemies = enemyDamage + enemyDamage2;
		heroHP = heroHP - totalDamageEnemies;
		enemyHP = enemyHP - jumpAttack;
		if (enemyHP <= 0) {
			cout << "Has matado al enemigo " << enemyName << "\n";
			cout << "El enemigo " << enemyName << " ha muerto\n";
			cout << "El enemigo " << enemyName2 << " le quedan " << enemyHP2 << " puntos de vida\n\n";
			isAlive = false;

		}
		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP << "HP al enemigo " << enemyName << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage << " puntos de damage\n";
			cout << "Te han atacado a la vez con " << totalDamageEnemies << " puntos de damage\n";
			cout << "Te quedan " << heroHP << " puntos de HP\n\n";
			if (heroHP <= 0) {
				cout << "Te quedan 0 puntos de HP\n\n";
			}
			else {
				cout << "Te quedan " << heroHP << " puntos de HP\n\n";
			}
		}
		break;
	case 3:
		enemyDamage = (rand() % 100);
		enemyDamage2 = (rand() % 100);
		totalDamageEnemies = enemyDamage + enemyDamage2;
		heroHP = heroHP - totalDamageEnemies;
		leftAttack = leftAttack - 1;
		if (leftAttack < 0) {
			cout << "No te quedan más ataques de tipo fuego\n";
		}
		else {
			heroDamage = fireAttack;
			enemyHP = enemyHP - fireAttack;
		}
		if (enemyHP <= 0) {
			cout << "Has matado al enemigo " << enemyName << "\n";
			cout << "El enemigo " << enemyName << " ha muerto\n";
			cout << "El enemigo " << enemyName2 << " le quedan " << enemyHP2 << " puntos de vida\n\n";
			isAlive = false;
		}
		else {
			PlaySound(TEXT("fire.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP << "HP al enemigo " << enemyName << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage << " puntos de damage\n";
			cout << "Te han atacado a la vez con " << totalDamageEnemies << " puntos de damage\n";
			if (heroHP <= 0) {
				cout << "Te quedan 0 puntos de HP\n\n";
			}
			else {
				cout << "Te quedan " << heroHP << " puntos de HP\n\n";
			}
		}
		break;
	}
}

void weapons2() {
	switch (selectWeapon2) {
	case 1:
		heroDamage = punchAttack;
		enemyDamage = (rand() % 100);
		enemyDamage2 = (rand() % 100);
		totalDamageEnemies = enemyDamage + enemyDamage2;
		heroHP = heroHP - totalDamageEnemies;
		enemyHP2 = enemyHP2 - punchAttack;
		if (enemyHP2 <= 0) {
			cout << "Has matado al enemigo " << enemyName2 << "\n";
			cout << "El enemigo " << enemyName2 << " ha muerto\n";
			cout << "El enemigo " << enemyName << " le quedan " << enemyHP << " puntos de vida\n\n";
			isAlive2 = false;
		}

		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP2 << "HP al enemigo " << enemyName2 << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage2 << " puntos de damage\n";
			cout << "Te han atacado a la vez con " << totalDamageEnemies << " puntos de damage\n\n";
			if (heroHP <= 0) {
				cout << "Te quedan 0 puntos de HP\n\n";
			}
			else {
				cout << "Te quedan " << heroHP << " puntos de HP\n\n";
			}
		}
		break;
	case 2:
		heroDamage = jumpAttack;
		enemyDamage = (rand() % 100);
		enemyDamage2 = (rand() % 100);
		totalDamageEnemies = enemyDamage + enemyDamage2;
		heroHP = heroHP - totalDamageEnemies;
		enemyHP2 = enemyHP2 - jumpAttack;
		if (enemyHP2 <= 0) {
			cout << "Has matado al enemigo " << enemyName2 << "\n";
			cout << "El enemigo " << enemyName2 << " ha muerto\n";
			cout << "El enemigo " << enemyName << " le quedan " << enemyHP << " puntos de vida\n\n";
			isAlive2 = false;
		}
		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP2 << "HP al enemigo " << enemyName2 << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage2 << " puntos de damage\n";
			cout << "Te han atacado a la vez con " << totalDamageEnemies << " puntos de damage\n\n";
			if (heroHP <= 0) {
				cout << "Te quedan 0 puntos de HP\n\n";
			}
			else {
				cout << "Te quedan " << heroHP << " puntos de HP\n\n";
			}
		}
		break;
	case 3:
		enemyDamage = (rand() % 100);
		enemyDamage2 = (rand() % 100);
		totalDamageEnemies = enemyDamage + enemyDamage2;
		heroHP = heroHP - totalDamageEnemies;
		leftAttack = leftAttack - 1;
		if (leftAttack < 0) {
			cout << "No te quedan más ataques de tipo fuego\n";
		}
		else {
			heroDamage = fireAttack;
			enemyHP = enemyHP - fireAttack;
		}
		if (enemyHP2 <= 0) {
			cout << "Has matado al enemigo " << enemyName2 << "\n";
			cout << "El enemigo " << enemyName2 << " ha muerto\n";
			cout << "El enemigo " << enemyName << " le quedan " << enemyHP << " puntos de vida\n\n";
			isAlive2 = false;
		}
		else {
			PlaySound(TEXT("fire.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP2 << "HP al enemigo " << enemyName2 << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage2 << " puntos de damage\n";
			cout << "Te han atacado a la vez con " << totalDamageEnemies << " puntos de damage\n\n";
			if (heroHP <= 0) {
				cout << "Te quedan 0 puntos de HP\n\n";
			}
			else {
				cout << "Te quedan " << heroHP << " puntos de HP\n\n";
			}
		}
		break;
	}
}

void selectMenu() {
	cout << "Ayudanos a exterminar el mal en nuestro mundo\n";
	cout << "Elige a quien quieres atacar:\n";
	cout << "*------------------------------------------------------------*\n";
	cout << "|[1] - " << enemyName << " tiene " << enemyHP << " de vida\n";
	cout << "|------------------------------------------------------------*\n";
	cout << "|[2] - " << enemyName2 << " tiene " << enemyHP2 << " de vida\n";
	cout << "*------------------------------------------------------------*\n\n";
	cin >> selectEnemy;
}

void intro() {
	cout << "Lo siento pero la princesa esta en otro castillo...\n";
	cout << "Como te llamas?\n";
	cin >> heroName;
	cout << "\n\n";
}

bool heroDead() {
	if (heroHP <= 0) {
		cout << "Has palmado\n";
		return heroAlive = false;
		
	}
	else {
		return heroAlive = true;
	}
}

bool herolive() {
	if (heroHP > 0) {
		cout << "Has Ganado\n";
		return heroAlive = true;

	}
	else {
		return heroAlive = false;
	}
}

int selectEnemies(int selectEnemy) {
	if (selectEnemy == 1) {
		cout << "Has elegido al enemigo 1\n";
		PlaySound(TEXT("boo.wav"), NULL, SND_LOOP);
		cout << "Atacas al " << enemyName << ", elige tu arma\n";
		cout << "[1] - punch\n";
		cout << "[2] - jump\n";
		cout << "[3] - fireball: " << leftAttack << " ataques disponibles \n";
		cin >> selectWeapon;
		cout << "\n\n";
		weapons();
		return selectEnemy = 1;
		
	}
	else if (selectEnemy == 2) {
		cout << "Has elegido al enemigo 2\n";
		PlaySound(TEXT("goomba.wav"), NULL, SND_LOOP);
		cout << "Atacas al " << enemyName2 << ", elige tu arma\n";
		cout << "[1] - punch\n";
		cout << "[2] - jump\n";
		cout << "[3] - fireball: " << leftAttack << " ataques disponibles \n";
		cin >> selectWeapon;
		cout << "\n\n";
		weapons2();
		return selectEnemy = 2;
		
	}
	else {
		cout << "no has seleccionado nada\n";
	}
}

void weaponBOO() {
	switch (selectWeapon) {

	case 1:
		heroDamage = punchAttack;
		enemyDamage = (rand() % 100);
		heroHP = heroHP - enemyDamage;
		enemyHP = enemyHP - punchAttack;
		if (enemyHP <= 0) {
			isAlive = false;
		}
		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP << "HP al enemigo " << enemyName << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage << " puntos de damage\n";
		}
		break;

	case 2:
		heroDamage = jumpAttack;
		enemyDamage = (rand() % 100);
		heroHP = heroHP - enemyDamage;
		enemyHP = enemyHP - jumpAttack;
		if (enemyHP <= 0) {
			isAlive = false;
		}
		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP << "HP al enemigo " << enemyName << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage << " puntos de damage\n";
		}
		break;

	case 3:
		enemyDamage = (rand() % 100);
		heroHP = heroHP - enemyDamage;
		leftAttack = leftAttack - 1;
		if (leftAttack < 0) {
			cout << "No te quedan más ataques de tipo fuego\n";
		}
		else {
			heroDamage = fireAttack;
			enemyHP = enemyHP - fireAttack;
		}
		if (enemyHP <= 0) {
			isAlive = false;
		}
		else {
			PlaySound(TEXT("fire.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP << "HP al enemigo " << enemyName << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage << " puntos de damage\n";
		}
		break;
	}
}

void weaponGoomba() {
	switch (selectWeapon) {

	case 1:
		heroDamage = punchAttack;
		enemyDamage2 = (rand() % 100);
		heroHP = heroHP - enemyDamage;
		enemyHP2 = enemyHP2 - punchAttack;
		if (enemyHP2 <= 0) {
			isAlive = false;
		}
		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP2 << "HP al enemigo " << enemyName2 << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage2 << " puntos de damage\n";
		}
		break;

	case 2:
		heroDamage = jumpAttack;
		enemyDamage2 = (rand() % 100);
		heroHP = heroHP - enemyDamage;
		enemyHP2 = enemyHP2 - jumpAttack;
		if (enemyHP2 <= 0) {
			isAlive = false;
		}
		else {
			PlaySound(TEXT("punch.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP2 << "HP al enemigo " << enemyName2 << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage2 << " puntos de damage\n";
		}
		break;

	case 3:
		enemyDamage2 = (rand() % 100);
		heroHP = heroHP - enemyDamage;
		leftAttack = leftAttack - 1;
		if (leftAttack < 0) {
			cout << "No te quedan más ataques de tipo fuego\n";
		}
		else {
			heroDamage = fireAttack;
			enemyHP2 = enemyHP2 - fireAttack;
		}
		if (enemyHP <= 0) {
			isAlive = false;
		}
		else {
			PlaySound(TEXT("fire.wav"), NULL, SND_LOOP);
			cout << "Le queda " << enemyHP2 << "HP al enemigo " << enemyName2 << "\n";
			cout << "El enemigo te ha hecho " << enemyDamage2 << " puntos de damage\n";
		}
		break;
	}
}

void oneAlive() {
	if (enemyHP > 0) { //BOO
		if (leftAttack < 0) {
			cout << "Elige tu arma\n";
			cout << "[1] - punch\n";
			cout << "[2] - jump\n";
			cout << "No te quedan más ataques de tipo fuego\n";
		}
		else {
			cout << "Te queda por matar a " << enemyName2 << "\n";
			cout << "Le quedan " << enemyHP2 << " de vida\n\n";
			cout << "Elige tu arma\n";
			cout << "[1] - punch\n";
			cout << "[2] - jump\n";
			cout << "[3] - fireball: " << leftAttack << " ataques disponibles \n";
		}
		cin >> selectWeapon;
		cout << "\n\n";
		//-------------------------------------------SELECCIONAS ARMA [1]
		weaponBOO();
	}
	else if (enemyHP2 > 0) { //GOOMBA
		if (leftAttack < 0) {
			cout << "Elige tu arma\n";
			cout << "[1] - punch\n";
			cout << "[2] - jump\n";
			cout << "No te quedan más ataques de tipo fuego\n";
		}
		else {
			cout << "Te queda por matar a " << enemyName2 << "\n";
			cout << "Le quedan " << enemyHP2 << " de vida\n\n";
			cout << "Elige tu arma\n";
			cout << "[1] - punch\n";
			cout << "[2] - jump\n";
			cout << "[3] - fireball: " << leftAttack << " ataques disponibles \n";
		}
		cin >> selectWeapon;
		cout << "\n\n";
		//-------------------------------------------SELECCIONAS ARMA [1]
		weaponGoomba();
	}
}

int main()
{
	intro();
	while (heroHP > 0 || enemyHP > 0 || enemyHP2 > 0) {
		//PlaySound(TEXT("main.wav"), NULL, SND_FILENAME | SND_ASYNC);
		if (enemyHP <= 0 && enemyHP2 <= 0) {
			herolive();
			//PlaySound(TEXT("win.wav"), NULL, SND_LOOP);
			break;
		}
		else if (heroHP <= 0) {
			heroDead;
			//PlaySound(TEXT("dead.wav"), NULL, SND_LOOP);
			break;
		}
		else if (heroHP > 0 && enemyHP > 0 && enemyHP2 > 0) {
			selectMenu();
			selectEnemies(selectEnemy);
		}		
		else if (heroHP > 0 && (enemyHP <= 0) || (enemyHP2 <= 0)) {
			oneAlive();
		}
	}
}
