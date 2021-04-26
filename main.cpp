#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

/*
	Name: Menu de duas opções.
	Author: Leonardo César <leoccet@gmail.com>
	Date: 02/04/18 
*/

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#define UP 72		
#define DOWN 80			// Constantes que definem o
#define RIGHT 77		// código da tecla pressionada
#define LEFT 75			// de acordo com a tabela ASCII
#define ENTER 13
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

using namespace std;

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
void opcoes(int x) {
	system("cls");
  
	if(x == 1) {							
		cout << "MENU\n\n";					    // Alterar o nome das
		cout << "> Opcao1\n  Opcao2";   // opções desejadas.
	}					                        // Substituir "opcao1" e
                                    // "opcao2" pelos nomes
	if(x == 2) {								      // de sua preferência.
		cout << "MENU\n\n";					    
		cout << "  Opcao1\n> Opcao2";	
	}
}
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void menu(){	
	int teclaPressionada, // Variável que irá receber o código da tecla pressionada
		contadorMenu = 1;   // Variável que irá controlar qual opção está selecionada
	
	opcoes(1);
	
	while (1){	
		
		teclaPressionada = getch();
		
		switch (teclaPressionada){
		
			case DOWN:
				if (contadorMenu<2){
					contadorMenu++;

					if (contadorMenu==2){
						opcoes(contadorMenu);	
					}			
				}
			break;
			
			case UP:
				if (contadorMenu>1){
					contadorMenu--;
								
					if (contadorMenu==1){
						opcoes(contadorMenu);
					}
				}		
			break;
			
			case ENTER:	
				if(contadorMenu == 1){
					cout << endl << endl << "Ihuuuuuuuu!"; // Faça alguma coisa aqui
				}
				if(contadorMenu == 2){
					cout << endl << endl << "Ihuuuuuuuu segunda opção!"; // Faça alguma outra coisa aqui
				}
	
			break;
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
}
