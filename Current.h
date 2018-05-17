#ifndef Header_h
#define Header_h

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "bool.h"


struct Node_Type
{
    int info;
    // datos
    
    struct Node_Type* next;
    // apuntador al siguiente nodo
};

typedef struct Node_Type Node;


typedef struct
{
    Node* first;
    // apuntador al primer nodo
    
    Node* last;
    // apuntador al último nodo
} SLL;



/*-------------------------------------------------------------------
 *  funciones privadas!!
 *-----------------------------------------------------------------*/

static Node* newNode (int val);

/*-------------------------------------------------------------------
 *  Funciones públicas (operaciones) !!
 *-----------------------------------------------------------------*/

/// @brief Crea una nueva lista
///
/// @return Referencia a la nueva lista; NULL en caso de error

SLL* SLL_New();


/// @brief Destruye una lista
///
/// @param this Referencia al objeto que se quiere destruir

void SLL_Delete( SLL* this );


/// @brief Inserta un elemento en la parte posterior de la lista
///
/// @param this Referencia a un objeto tipo SLL
/// @param val Es el elemento que se desea insertar en la lista
///
/// @return false si hubo un problema asignando memoria para el nuevo nodo; true
///         en caso contrario

bool SLL_InsertBack( SLL* this, int val );


/// @brief Inserta un elemento en la parte frontal de la lista
///
/// @param this Referencia a un objeto tipo SLL
/// @param val Es el elemento que se desea insertar en la lista
///
/// @return false si hubo un problema asignando memoria para el nuevo nodo; true
///         en caso contrario

bool SLL_InsertFront( SLL* this, int val );


/// @brief Extrae el elemento en la parte frontal de la lista
///
/// @param this Referencia a un objeto tipo SLL
///
/// @return Una copia del elemento al frente de la lista
///
/// @pre La lista existe; en caso contrario se dispara una aserción
/// @pre La lista no está vacía; en caso contrario se dispara una aserción

int SLL_RemoveFront( SLL* this );


/// @brief Extrae el elemento en la parte posterior de la lista
///
/// @param this Referencia a un objeto tipo SLL
///
/// @return Una copia del elemento al fondo de la lista
///
/// @pre La lista existe; en caso contrario se dispara una aserción
/// @pre La lista no está vacía; en caso contrario se dispara una aserción

int SLL_RemoveBack( SLL* this );


/// @brief Indica si un elemento está en la lista
///
/// @param this Referencia a un objeto tipo SLL
/// @param val Elemento que se desea buscar
///
/// @return true si el elemento ya está en la lista; false en caso contrario

bool SLL_FindIf( SLL* this, int val );


/// @brief Indica si una lista está vacía o no
///
/// @param this Referencia a un objeto tipo SLL
///
/// @return true si la lista está vacía; false en caso contrario

bool SLL_IsEmpty (SLL* this);


/// @brief Purga (limpia) una lista.
/// Esta función no elimina la lista. Si lo que se desea es eliminarla,
/// entonces se debe usar la función \see SLL_Delete()
///
/// @param this Referencia a un objeto tipo SLL

void SLL_Purge( SLL* this );

#endif /* Header_h */
