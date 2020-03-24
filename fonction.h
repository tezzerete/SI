/*
 * fonction.h
 *
 *  Created on: 22 janv. 2020
 *      Author: MERLE
 */

#ifndef FONCTION_H_
#define FONCTION_H_

void fenetre(unsigned char character1, unsigned char character2);
void menu_accueil(void);
void appuye_touche(void);
void recap_regle(void);
void interface(unsigned char x, unsigned char y);
void init_alien(void);
void deplacement_vaisseau(void);
void shoot(void);
void collision(void);
uint8_t deplacement_ennemi(void);
void fin_de_partie(void);

#endif /* FONCTION_H_ */
