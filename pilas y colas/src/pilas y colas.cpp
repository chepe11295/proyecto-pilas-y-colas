//============================================================================
// Name        : pilas.cpp
// Author      : Jose Marroquin
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cstdlib>
#include "cola.h"
#include "pila.h"

using namespace std;

int main() {

// este codigo es como usted comento que iba a revisar nuestro proyecto


	//inicio proceso cola
	cout<<"\n\n\n<<<Proceso de Cola>>>"<<endl;
	Cola cl;

	cl.Listavaciacola(); // indica si la lista esta vacia o contiene datos
	cl.tamaniocola();  //indica el tamanio de la lista

	cl.Pushcola("jo"); 	//prueba que no permite mas o menos de 1 caracter en la cola
	cl.Pushcola("j");
	cl.Pushcola("o");
	cl.Pushcola("s");
	cl.Pushcola("e");	 //ingreso de caracteres al programa con la funcion push

	cl.tamaniocola();  //indica el tamanio de la lista
	cl.Listavaciacola();  // indica si la lista esta vacia o contiene datos

	cl.Imprimircola();	 //imprimir todos los nodos existentes hasta el momento
	cl.Topcola(); 		//imprimir el caracter que se encuentra en top en este momento
	cl.Popcola(); 		//eliminar el caracter que se encuentra en top en este momento
	cl.Imprimircola();
	cl.tamaniocola();  //indica el tamanio de la lista
	cl.Topcola();
	cl.Popcola();
	system("PAUSE");
	//fin proceso cola

	//inicio proceso pila
	cout<<"\n\n\n<<<Proceso de Pila>>>"<<endl;
	Pila pl;
	pl.Listavaciapila(); // indica si la lista esta vacia o contiene datos
	pl.tamaniopila();  //indica el tamanio de la lista

	pl.Pushpila("j");
	pl.Pushpila("o");
	pl.Pushpila("s");
	pl.Pushpila("e"); 	//ingreso de caracteres al programa con la funcion push
	pl.Pushpila("jo"); 	//prueba que no permite mas o menos de 1 caracter en la pila

	pl.Listavaciapila(); // indica si la lista esta vacia o contiene datos
	pl.tamaniopila();  //indica el tamanio de la lista

	pl.Imprimirpila();	//imprimir todos los nodos existentes hasta el momento
	pl.tamaniopila();  //indica el tamanio de la lista
	pl.Toppila();		//imprimir el caracter que se encuentra en top en este momento
	pl.Poppila();		//eliminar el caracter que se encuentra en top en este momento
	pl.Imprimirpila();
	pl.tamaniopila();  //indica el tamanio de la lista
	pl.Toppila();
	pl.Poppila();
	system("PAUSE");
	//fin proceso pila

	/*menu para ejecutar funciones

	string caracter;
	Cola cl;
	Pila pl;
	int opcion;
	while(opcion!=13)
	{
		cout<<"\n\n\n<<<Proceso de pilas y colas>>>"<<endl;
		cout<<"opciones para cola: "<<endl;
		cout<<"1. push. "<<endl;
		cout<<"2. pop. "<<endl;
		cout<<"3. top. "<<endl;
		cout<<"4. imprimir. "<<endl;
		cout<<"5. tamaño de lista. "<<endl;
		cout<<"6. verificar si hay datos en lista.\n"<<endl;
		cout<<"opciones para pila: "<<endl;
		cout<<"7. push. "<<endl;
		cout<<"8. pop. "<<endl;
		cout<<"9. top. "<<endl;
		cout<<"10. imprimir. "<<endl;
		cout<<"11. tamaño de lista. "<<endl;
		cout<<"12. verificar si hay datos en lista.\n\n"<<endl;
		cout<<"13. salir.\n\n"<<endl;
		cout<<"ingrese opcion que desea realizar: "<<endl;
		cin>>opcion;

		switch(opcion)
		{
		case 1:
			cout<<"ingrese caracter que desea ingresar: "<<endl;
			cin>>caracter;
			cl.Pushcola(caracter);
			break;
		case 2:
			cl.Popcola();
			break;
		case 3:
			cl.Topcola();
			break;
		case 4:
			cl.Imprimircola();
			break;
		case 5:
			cl.tamaniocola();
			break;
		case 6:
			cl.Listavaciacola();
			break;
		case 7:
			cout<<"ingrese caracter que desea ingresar: "<<endl;
			cin>>caracter;
			pl.Pushpila(caracter);
			break;
		case 8:
			pl.Poppila();
			break;
		case 9:
			pl.Toppila();
			break;
		case 10:
			pl.Imprimirpila();
			break;
		case 11:
			pl.tamaniopila();
			break;
		case 12:
			pl.Listavaciapila();
			break;
		case 13:
			cout<<"\n HASTA LA PROXIMA"<<endl;
			break;
		default:
			cout<<"esta opcion no esta disponible"<<endl;
			cout<<"por favor, ingrese una opcion entre 1 y 12"<<endl;

	}
	system("PAUSE");
	}
	*
	 */

}
