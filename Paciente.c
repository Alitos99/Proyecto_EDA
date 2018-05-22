#include <stdlib.h>
#include <time.h>
#include "Paciente.h"
#include <stdio.h>


Paciente* Paciente_nuevo()
	{
	Paciente* p =(Paciente*)malloc(sizeof(Paciente));
	return p;
	} 

	
void Paciente_Delete(Paciente* this)
 {
 	if(this != NULL)
    {
 	free(this->Nombre);
 	free(this->doctor);
 	free(this->fecha);
 	free(this->especialidad);
    free(this);
    this=NULL;
	}
 }	
	
void Paciente_Ctor( Paciente* this )
  {
	this->Nombre[0]=' ';
	this->doctor[0]=' ';
	this->fecha[0]=' ';
	this->especialidad[0]=' ';
	this->Edad=0;
	this->Peso=0.0;
	this->folio=0;
  }



void Paciente_SetDatos( Paciente* this, char* Nombre, char* doctor, char* fecha, char* especialidad,  double peso, int  edad )
  {
	this->Nombre = Nombre;
	this->doctor = doctor;
	this->fecha = fecha;
	this->especialidad = especialidad;
    this->Peso= peso;
	this->Edad= edad;
	
	srand(time(NULL)); 
	size_t random = edad+rand(); 
	
	this->folio = random;
	
	
  }



 
 

void Paciente_PrintDatos( Paciente* this)
{
	printf ("\t FICHA DE CITA HOSPITAL DE LA FI \n");
	printf("\n Nombre del paciente :  %s \n ",this->Nombre);
	printf("\n Edad del paciente   :  %d \n",this->Edad);
	printf("\n Peso del paciente   :  %f \n",this->Peso);
	printf("\n Nombre del Doctor   :  %s \n ",this->doctor);
	printf("\n Especialidad        :  %s \n ",this->especialidad);
	printf("\n Folio               :  %d \n",this->folio);
	printf("\n Fecha progrmada para la cita:  %s \n ",this->fecha);
	


	
}


void Paciente_RestablecerDatos( Paciente* this, char* Nombre, char* doctor, char* fecha, char* especialidad, double peso, int  edad )
{
	
	this->Nombre = Nombre;
	this->doctor = doctor;
	this->fecha = fecha;
	this->especialidad = especialidad;
    this->Peso= peso;
	this->Edad= edad;
	
//	srand(time(NULL)); 
//	int random = edad+rand(); 
	
//	this->folio = random;		
}
 
char* Paciente_nombre()
 {
	   printf("\n¿Cual es el Nombre del paciente? :\n");
	
	   char* Nombre =(char*)malloc(sizeof(char)*1);
	   int Indice= 0;
	   getchar();
	   
	    while( 1 )
	    {
		   Nombre = (char*)realloc(Nombre,Indice + 1);
		   int c = getchar();
		   if( c == '\n' )
		     {
		      Nombre[Indice] = 0;
		      break;
		     }
		    Nombre[Indice] = (char)c;
		    Indice++;
	     }
	 return Nombre;
 }
 
 char* Paciente_doctor()
 {
	   printf("\n¿Cual es Doctor de su prefrencia? :\n");
	
	   char* Nombre =(char*)malloc(sizeof(char)*1);
	   int Indice= 0;
	   getchar();
	   
	    while( 1 )
	    {
		   Nombre = (char*)realloc(Nombre,Indice + 1);
		   int c = getchar();
		   if( c == '\n' )
		     {
		      Nombre[Indice] = 0;
		      break;
		     }
		    Nombre[Indice] = (char)c;
		    Indice++;
	     }
	 return Nombre;
 }
 
 
 char* Paciente_Fecha()
 {
	  printf("\n¿Cual es la fecha de su cita? :\n");
	
	   char* Nombre =(char*)malloc(sizeof(char)*1);
	   int Indice= 0;
	   
	   
	    while( 1 )
	    {
		   Nombre = (char*)realloc(Nombre,Indice + 1);
		   int c = getchar();
		   
		   if( c == '\n' )
		     {
		      Nombre[Indice] = 0;
		      break;
		     }
		    Nombre[Indice] = (char)c;
		    Indice++;
	     }
	 return Nombre;
 }

char* Paciente_Especialidad()
 {
	   printf("\n¿Cual es la especialidad de su doctor? :\n");
	
	   char* Nombre =(char*)malloc(sizeof(char)*1);
	   int Indice= 0;
	   getchar();
	   
	    while( 1 )
	    {
		   Nombre = (char*)realloc(Nombre,Indice + 1);
		   int c = getchar();
		   if( c == '\n' )
		     {
		      Nombre[Indice] = 0;
		      break;
		     }
		    Nombre[Indice] = (char)c;
		    Indice++;
	     }
	 return Nombre;
 }

