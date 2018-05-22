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

/**
 * @file DLL.h
 * @brief TDU para una lista doblemente enlazada de Contadores
 * @author eda1 dot fiunam at yahoo dot com dot mx
 * @version 0.1
 * @date 2018-03-08
 */


#ifndef  DLL_INC
#define  DLL_INC

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "bool.h"
#include "Contador.h"

struct Node_Type
{
	Paciente* info;

	struct Node_Type* next;
	struct Node_Type* prev;
};

typedef struct Node_Type Node;


typedef struct 
{
	Node* first;
	Node* last;
	Node* cursor;
} DLL;


DLL* DLL_New();
void DLL_Delete( DLL* this );
bool DLL_Insert( DLL* this, Paciente* c );
bool DLL_FindIf( DLL* this, size_t folio );
bool DLL_Search( DLL* this, size_t folio );
bool DLL_Remove( DLL* this );
bool DLL_IsEmpty (DLL* this);
//void DLL_Purge( DLL* this );

void DLL_First( DLL* this );
void DLL_Last( DLL* this );
void DLL_Next( DLL* this );
void DLL_Prev( DLL* this );
//void DLL_Search( DLL* this );



#endif   /* ----- #ifndef DLL_INC  ----- */
