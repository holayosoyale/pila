#include <iostream>
#include <conio.h>
#include <stdlib.h>
//Pila= Es una estructura de datos ordenada en la que el modo
// de acceso a sus elementos de tipo LIFO
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int);//Prototipo agregar Nodo

int main(int argc, char** argv) {

	Nodo *pila = NULL;
	int nodo1,nodo2;
	cout<<" \n Insertar Dato 1: ";
	cin>>nodo1;
	agregarPila(pila,nodo1);
	cout<<" \n Insertar Dato 2: ";
	cin>>nodo2;
	agregarPila(pila,nodo2);
	
	return 0;
}
void agregarPila(Nodo *&pila, int a){
	Nodo *nuevo_nodo = new Nodo();
	//creamos espacio de memoria para guardar nuevo nodo
	nuevo_nodo->dato= a;
	//mandamos el valor a Nodo
	nuevo_nodo->siguiente=pila;
	//mandamos el nuevo nodo a pila
	pila = nuevo_nodo;
	//pila señala a nuevo nodo
	cout<<" \n Dato: "<<a<<" \n\n Agregado a Pila exitosamente"<<endl;
}



