/**
@file lista_char.h
@author Andrés Eduardo Vega Vega
*/

#include <lista_char.h>

lista_char::lista_char() {
	this->head = NULL;	
}
/**
@brief Modifica la cabeza de la lista, empujando un nodo
@param Toma como parametro el entero que se empujará en la cabeza de la lista.
@return Retorna true si la lista se ha modificado, de lo contrario false.
*/
char lista_char::push_head(char i){
	nodo_char* nuevo = new nodo_char;
	nuevo->set_key(i);
	nodo_char* aux = this->get_last();
	if(aux){
		aux->set_next(nuevo);		
	}else{
		this->head=nuevo;
	}
	return 1;	
}
/**
@brief Observador de la lista completa
*/
void lista_char::get_all(){
	if(this->empty()){
		cout<<"Lista vacía"<<endl;// valor de prueba
	}else{
		nodo_char* aux = new nodo_char;
		aux=this->head;
		if(aux){
            while(aux->get_next() != NULL){
              	cout<<'['<<aux->get_key()<<']';
                aux = aux->get_next();
            }
        }
	}			
}
/**
@brief Obtiene el último elemento de la lista
@return Retorna un puntero al ultimo nodo.
*/
nodo_char* lista_char::get_last(){
	nodo_char* aux = new nodo_char;
	aux=this->head;
	if(aux){
        while(aux->get_next() != NULL){
            aux = aux->get_next();
        }
    }
    return aux;
}
/**
@brief Evalúa si un conjunto (lista) que llama la función miembro pertenece a otro conjunto objetivo
@param vocales: referencia a una lista, la cual será el conjunto objetivo con el que se hará la comparación
@return Retorna true si el conjunto letras pertenece al conjunto vocales, de lo contrario retorna false.
*/
bool lista_char::pertenece_a(lista_char& vocales){
	if(this->empty()){
		return false;
	}else{
		bool bandera=false;
		bool bandera2=false;
		nodo_char* aux = new nodo_char;
		aux=this->head;
		nodo_char* aux2 = new nodo_char;		
		aux2=vocales.head;
		nodo_char* aux3 = new nodo_char;
		cout<<endl;
		//letras = aux
		//vocales = aux2
		if(aux && aux2){
			while(aux->get_next() != NULL){
				//cout<<"comparando aux: "<<aux->get_key()<<" con "<<endl;
	            while(aux2->get_next() != NULL){
	            	//cout<<"aux2: "<<aux2->get_key()<<endl;
	            	if(bandera2==false){
	            		bandera2=true;
	            		aux3=vocales.head;
	            		//cout<<"aux3 = "<<this->head->get_key()<<endl;
	            	}
	            	if(aux->get_key()==aux2->get_key()){
	            		bandera=true;
	            		//cout<<"BANDERA = TRUE"<<endl;
	            		//cout<<"aux: "<<aux->get_key()<<" == aux2: "<<aux2->get_key()<<endl;
	            		break;
	            	}
	            	else{
	            		bandera=false;
	            		//cout<<"bandera = false"<<endl;
	            	}		            	            	
	            	aux2 = aux2->get_next();
	            }
	            if(bandera==false)
	            	break;
	            //cout<<"aux2 = aux3 = "<<aux3->get_key()<<endl;
	            aux2 = aux3;
	            
	            aux = aux->get_next();

	        }
	        if(bandera==true)
	        	return true;
	    	else
	    		return false;
    	}
    	cout<<endl<<endl;
    	delete[] aux;
    	delete[] aux2;
    	delete[] aux3;
	}
}
/**
@brief Determina si el conjunto this es vacio
@return devuelve true si el conjunto esta vacio, de lo contrario false
*/
bool lista_char::conjunto_vacio(){
	if(this->empty())
		return true;
	else
		return false;
}