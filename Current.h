
#ifndef Header_h
#define Header_h

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "bool.h"

/*typedef struct
{
    Node* first;
    Node* last;
    Node* curr;  Esta es la que se debe de agregar a la lista (DLL)
} dll;*/

void First_Curr ();
void Last_Curr ();
void Next_Curr ();
void Prev_Curr ();
bool Insert_Curr ();
void Serch();
dll* void Remove_Curr ();
dll* void Get_Curr ();


#endif /* Header_h */
