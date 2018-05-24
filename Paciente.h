/**------------------------------------------------------------------------------------------
 * @file Alumno.h
 * @brief TDU para crear la entidad Alumno
 * @author Aviles Martinez Bryan
 * @version 0.1
 * @date 2018-03-21
 -----------------------------------------------------------------------*/


#ifndef  PACIENTE_INC
#define  PACIENTE_INC


#include <stdio.h>

typedef struct 
{
	char* Nombre;
	int Edad;
	size_t folio;
	double Peso;
	char* doctor;
	char* fecha;
	char* especialidad;
}Paciente;



Paciente* Paciente_nuevo();

char* Paciente_nombre();

char* Paciente_doctor();

char* Paciente_Fecha();

char* Paciente_Especialidad();
 	
void Paciente_Delete(Paciente* this);

void Paciente_Ctor( Paciente* this );


 
void Paciente_SetDatos( Paciente* this, char* Nombre, char* doctor, char* fecha, char* especialidad,  double peso, int  edad );


void Paciente_PrintDatos( Paciente* this);

 


void Paciente_RestablecerDatos( Paciente* this, char* Nombre, char* doctor, char* fecha, char* especialidad,  double peso, int  edad );




#endif   // ALUMNO_INC
