/**
@file lista_char.h
@author Andrés Eduardo Vega Vega
*/

#ifndef LISTA_CHAR_H
#define LISTA_CHAR_H
#include <nodo_char.h>
#include <iostream>
using std::cout;
using std::endl;

class lista_char{
private:
	nodo_char* head;
public:
	lista_char();	
	~lista_char(){}
	/**
	@brief Verifica si la lista esta vacía
	@return Retorna true si la lista está vacía, de lo contrario false.
	*/
	bool empty()const{
		if(this->head == 0){
			return true;
		}else{
			return false;
		}
	}
	/**
	@brief Observador del nodo head
	@return Retorna el key del nodo head.
	*/
	inline char get_first() const{
		if(this->empty()){
			return 0;// valor de prueba
		}else{
			return this->head->get_key();
		}			
	}
	void get_all();
	char push_head(char);
	nodo_char* get_last();
	bool pertenece_a(lista_char&);
	bool conjunto_vacio();
};

#endif

