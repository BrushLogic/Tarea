/**
@file nodo_char.cpp
@author Andrés Eduardo Vega Vega
*/
#include <nodo_char.h>
/**
@brief Constructor por defecto, establece el puntero del nodo inicial al siguiente elemento como null
*/
nodo_char::nodo_char() {
	this->sig = 0;	
}
/**
@brief Modificador de key para el nodo
@param Caracter que se guardará en el key del nodo
*/
char nodo_char::set_key(char k)
{
	this->key = k;
	return 0;
}
/**
@brief Modificador de apuntador al siguiente nodo
@param Apuntador a un nodo_char que se guardará en el nodo que llamó la función en su apuntador a siguiente nodo sig
*/
char nodo_char::set_next(nodo_char* n){
	this->sig = n;
	return 0;
}