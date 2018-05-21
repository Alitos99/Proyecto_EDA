
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
Paciente Get_Curr (dll* this){

}





