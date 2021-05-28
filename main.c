#include <stdio.h>
#include <stdlib.h>
#include "focntions.h"
#define MAX 1000


int main()
{
/*
    bienvenue();
    init();
	gestion();*/
    int Jeu[24]={1,2,1,0,1,2,0,1,0,0,0,2,2,0,2,1,0,0,0,0,0,0,0,0};
	int dep, arr, score;
	int x = minimax2(Jeu,5,1,2,&dep,&arr, &score);
    printf("le nombre de noeuds explores en MINIMAX est: %d\n",x);

    int y = alphabeta2(Jeu,5,1,2,&dep,&arr,-MAX,+MAX,&score);
    printf("le nombre de noeuds explores en ALPHABETA est: %d\n",y);

    return 0;
}

