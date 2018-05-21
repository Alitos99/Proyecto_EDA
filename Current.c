
#include "Current.h"



void First_Curr (dll* this){
	curr = this -> first;
}

void Last_Curr (dll* this){
	curr = this -> last;
}

void Next_Curr (dll* this){
	if (curr != NULL){
		Node* tmp = this -> curr -> next;
		curr = tmp; 
	}
}

void Prev_Curr (dll* this){
	if (curr != NULL){
		Node* tmp = this -> curr -> prev;
		curr = tmp; 
	}
}

/*bool Insert_Curr (dll* this){
	n = newNode (x); // Apuntador a TDU Paciente
	if (n == NULL){
		return false;
	}
	if (caso general){
		Node* tmp = this -> curr -> next;
		this -> curr -> next = n;
		n -> next = tmp;
		tmp -> prev = n;
		n -> prev = curr;
		this -> curr = n;
	}
}*/

Paciente Remove_Curr (dll* this){
	Paciente* x = Serch ();  //Nueva funcion de buscar por el folio que es la llave o Key
	Node* tmp1 = this -> curr -> prev;
	Node* tmp2 = this -> curr -> next;
	free (this -> curr);
	tmp1 -> next = tmp2;
	tmp2 -> prev = tmp1;
	curr = tmp2;

	return x;
}

void Serch (folio){ // Coincidencia con KEY o folio
 	assert (this);
    
    Node* it = this->first;
    // NO PODEMOS PERDER A FIRST !!!
    
    if (this->first == NULL){
        return false;
    }
    
    
    if (this->first == this->last){
        if (this->first->info == val){
            return true;
        }
    }
    else{
        while( it != NULL ) {
            if( it->info == val ) {
                return true;  //Retornar el nodo al paciente 
            }
            else {
                // es sumamente peligroso hacer lo siguiente:
                // it = it->next
                // por eso lo hemos hecho en dos pasos
                
                Node* tmp = it->next;
                it = tmp;
            }
        }
    }
    return false; // Retornamos o error (Assert)
}

dll* Get_Curr (dll* this){
	Node* x = this -> curr -> paciente; // o info 
	return x;
}

dll* Set_Curr (){
	Node* x = this -> curr;
	return x;
} 



