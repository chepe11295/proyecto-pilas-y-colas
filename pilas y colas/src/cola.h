/*
 * cola.h
 *
 *  Created on: 6/06/2016
 *      Author: Mario Rosa
 */

#ifndef COLA_H_
#define COLA_H_

#include <iostream>
# include <stdlib.h>
# include <string.h>
using namespace std;


struct Cola //estructura creada para crear vraiables en el programa principal
{
		struct Letra//estructura creada para crear los nodos donde se van almacenar los caracteres
		{
			string caracter;//dato donde se almacenara el caracter
			struct Letra *siguiente;
		};
		Letra *top = NULL;
		Letra *auxiliar = NULL;
		Letra *fincola = NULL;             // los 4 anterios son punteros para manipular los datos en las funciones que estan mas adelante


			void Pushcola (string x)   //funcion push para insertar caracteres
			{
				int noletras = x.size();  // contador de letras que contiene el string ingresado en el programa principal
				if (noletras == 1)      //condicion para que cree nuevos nodos solamente si el string ingresado tiene un caracter.
				{
					if(top==NULL)    //if para crear el primer nodo de la estructura cuando aun no tenemos algun dato
					{
						top = new(Letra);
						top->caracter = x;
						fincola = top;
					}
					else  //metodo para crear un nuevo nodo siempre y cuando ya exista por lo menos 1
					{
						auxiliar = new(Letra);
						fincola->siguiente = auxiliar;
						auxiliar->caracter = x;
						fincola = auxiliar;
					}
					fincola->siguiente = NULL;
				}
				else  // mensaje de devolucion al usuario en caso de que el string ingresado contenga mas o menos de una letra.
				{
					cout<<"el valor: ''"<< x << "'' que ingresó, no puede ser almacenado porque contiene mas de 1 caracter."<<endl;
					cout<<"se procederá con las instrucciones siguientes ordenadas por ti"<<endl;
					cout<<"------------------------------------------------------------------------------------------------\n\n";
				}
			}

			void Topcola ()//funcion top para mostrar el dato que esta de primero en los datos almacenados.
			{
				if(top==NULL) //mensaje de devolucion en caso de que aun no exista algun nodo
				{
					cout<<"en este momento no existe la estructura"<<endl;
				}
				else // imprime el caracter que se encuentra en el puntero top
				{
					cout<<"\t el top de la cola es: "<<top->caracter<<endl;

				}
			}

			void Popcola() //metodo para eliminar el caracter que esta en el puntero top
			{
				if(top == NULL)//mensaje de devolucion en caso de que aun no exista algun nodo
				{
					cout<<"en este momento No existe ninguna estructura"<<endl;
				}
				else //asigna top al nodo que se encuentra siguiente de el y elimina el caracter que se encontraba en top anteriormente.
				{
				auxiliar = top; //aqui un puntero auxiliar pasa a ser top para mantener guardado ese caracter
				top = top->siguiente; // aqui top para a ser el nodo que se encuentra siguiente a él
				delete (auxiliar);//aqui se borra el caracter que estaba en top antes de que top pasara a ser el nodo sigiuente a él
				}
			}

			void Imprimircola() // metodo para mostrar todos los datos que se encuentran en la estructura.
			{
				auxiliar = top;
				int i = 0;//contador para enumerar los nodos
				if (top == NULL)//mensaje de devolucion en caso de que aun no exista algun nodo
				{
					cout<<"en este momento No existe una estructura"<<endl;
				}
				else //proceso en caso de que si existan nodos para imprimir
				{
					while (auxiliar != NULL)// proceso para que imprima todos caracteres contenidos en los nodos existentes
					{
						i++; //aumentar i para imprimir el numero que corresponde
						cout<< i<<". "<<auxiliar->caracter<<endl;
						auxiliar = auxiliar->siguiente;
					}
				}
			}

		void Listavaciacola() // funcion para verificar si la lista esta vacia
		{
		if(top == NULL)//mensaje para confirmar que la lista se encuentra vacia
		{
			cout <<"la lista se encuentra vacia"<<endl;
			cout<<"-----------------------------\n\n\n";
		}
		else //mensaje para confirmar que la lista contiene datos
		{
			cout<<"la lista contiene datos"<<endl;
			cout<<"-----------------------------\n\n\n";
		}
		}

		void tamaniocola () //funcion para verificar el tamanio de la lista
		{
			auxiliar = top;
			int i = 0;
			if(top==NULL) //mensaje de devolucion en caso de que aun no exista algun nodo
			{
				cout<<"El tamaño de la Lista de cola es: "<< i <<endl;
				cout<<"-----------------------------\n\n\n";
			}
			else
			{
				while (auxiliar != NULL)// proceso para contar todos caracteres contenidos en los nodos existentes
				{
					i++; //aumentar i para contar el numero de caracteres en la lista
					auxiliar = auxiliar->siguiente;
				}
			cout<<"El tamaño de la Lista de cola es: "<< i <<endl;
			cout<<"-----------------------------\n\n\n";
			}

		}
};



#endif /* COLA_H_ */
