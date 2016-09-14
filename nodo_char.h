/**
@file nodo_char.h
@author Andrés Eduardo Vega Vega
*/
#ifndef NODO_CHAR_H
#define NODO_CHAR_H

class nodo_char{
private:
	char key;
	nodo_char* sig;
public:
	nodo_char();
	~nodo_char(){}
	/**
	@brief Observador de llave de nodo
	@return Retorna llave del nodo tipo char
	*/
	inline char get_key(){
		return this->key;
	}
	/**
	@brief Observador del apuntador al siguiente nodo
	@return Retorna puntero al siguiente nodo
	*/
	inline nodo_char* get_next(){
		return this->sig;
	} 
	char set_key(char);
	char set_next(nodo_char*);
	
};

#endif

