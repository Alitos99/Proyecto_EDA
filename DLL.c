/*Copyright (C)
 * 2018 - eda1 dot fiunam at yahoo dot com dot mx
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */


#include "DLL.h"


/*-------------------------------------------------------------------
 *  funciones privadas!!
 *-----------------------------------------------------------------*/

static Node* newNode( Paciente* Paciente1 )
{
	assert( Paciente1 != NULL );
	Node* n = ( Node* ) malloc( sizeof ( Node ) );
	if( n != NULL ) {
		n->info = Paciente1;
		n->next = NULL;
		n->prev = NULL;
	}

	return n;
}

/*-------------------------------------------------------------------
 *  Funciones públicas (operaciones) !!
 *-----------------------------------------------------------------*/

/**
 * @brief Crea una nueva lista
 *
 * @return Referencia a la nueva lista; NULL en caso de error
 */
DLL* DLL_New()
{
	DLL* p = (DLL*) malloc (sizeof (DLL));
	if( p != NULL ) {
		p->first = NULL;
		p->last = NULL;
		p->cursor=NULL;
	}

	return p;
}

/**
 * @brief Destruye una lista
 *
 * @param this Referencia al objeto que se quiere destruir
 */
void DLL_Delete( DLL* this )
{
	assert( this );

	while( this->first != NULL ) {
		Node* tmp = this->first->next;
		Paciente_Delete(this->first->info);
		free( this->first );
		this->first = tmp;
	}

	free( this );
	this = NULL;
}

/**
 * @brief Inserta un elemento en la lista
 *
 * @param this Referencia a un objeto tipo DLL
 * @param c Es el elemento que se desea insertar en la lista
 *
 * @return false si hubo un problema asignando memoria para el nuevo nodo; true
 *         en caso contrario
 */


bool DLL_Insert( DLL* this, Paciente* Paciente1 )
{
	assert( this );

	Node* n = newNode( Paciente1 );
	if( n == NULL ) { return false;	}

	if( this->first == NULL ){
		this->first = n;
		this->last = n;
	}
	else {
		n->next = this->first;
		this->first->prev = n;
		this->first = n;
	}

	return true;
}


/**
 * @brief Extrae el elemento en la parte frontal de la lista
 *
 * @param this Referencia a un objeto tipo DLL
 *
 * @return Una referencia al elemento en el frente de la lista
 *
 * @pre La lista existe; en caso contrario se dispara una aserción
 * @pre La lista no está vacía; en caso contrario se dispara una aserción
 */
Contador* DLL_Remove( DLL* this )
{
	assert( this );
	assert( this->first != NULL );

	Pacirnte* c = this->first->info;

	if( this->first == this->last ){
		free( this->first );
		this->first = NULL;
		this->last = NULL;
	}
	else{
		Node* tmp = this->first->next;
		free( this->first );
		this->first = tmp;
		this->first->prev = NULL;
	}

	return c;

}


/**
 * @brief Indica si una lista está vacía o no
 *
 * @param this Referencia a un objeto tipo DLL
 *
 * @return true si la lista está vacía; false en caso contrario
 */
bool DLL_IsEmpty (DLL* this)
{
	assert( this );

	return this->first == NULL ? true : false;
}



/**
 * @brief Indica si un elemento está en la lista
 *
 * @param this Referencia a un objeto tipo DLL
 * @param c Elemento que se desea buscar
 *
 * @return true si el elemento ya está en la lista; false en caso contrario
 */
bool DLL_FindIf( DLL* this, size_t folio )
{
	assert( this );

	DLL_First( this );


	while( this->cursor != NULL ) {
		if( cursor->info->folio == folio){
			return true;
		}
		else {
			// es sumamente peligroso hacer lo siguiente:
			// it = it->next
			// por eso lo hemos hecho en dos pasos

			Node* tmp = cursor->next;
			cursor = tmp;
		}
	}

	return false;
}

/**
 * @brief Coloca al cursor en el primer elemento de la lista
 *
 * @param this Referencia a un objeto tipo DLL
 */
void DLL_First( DLL* this )
{
	this->cursor = this->first;
}

/**
 * @brief Coloca al cursor en el último elemento de la lista
 *
 * @param this Referencia a un objeto tipo DLL
 */
void DLL_Last( DLL* this )
{
	this->cursor = this->last;
}

/**
 * @brief Desplaza el cursor una posición a la derecha
 *
 * @param this Referencia a un objeto tipo DLL
 *
 * @pre No hace nada cuando el cursor está completamente a la derecha, e.g. ya
 * es NULL
 */
void DLL_Next( DLL* this )
{
	if( this->cursor != NULL ){
		Node* tmp = this->cursor->next;
		this->cursor = tmp;
	}
}

/**
 * @brief Desplaza el cursor una posición a la izquierda
 *
 * @param this Referencia a un objeto tipo DLL
 *
 * @pre No hace nada cuando el cursor está completamente a la izquierda, e.g. ya
 * es NULL
 */
void DLL_Prev( DLL* this )
{
	if( this->cursor != NULL ){
		Node* tmp = this->cursor->prev;
		this->cursor = tmp;
	}
}


