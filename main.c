#include <stdio.h>
#include<stdlib.h>
/*------- Sugerencia de funciones para driver program ------*/
int menu(){
    int opcion = 0;
do{
    system("cls");
    printf("1) Darse de alta\n");
    printf("2) Darse de baja\n");
    printf("3) Observar mis datos\n");
    scanf("%d", &opcion);

}while(opcion<1 || opcion>3);
     return (opcion);
}
void MENU(int n){
switch(n){
    case 1:
        printf("Darse de alta\n");
        //Insertar en lista
        break;
    case 2:
        printf("Darse de baja\n");
        //Remover de la lista
        break;
    case 3:
        printf("Ver mis datos");
        //BUscar en la lista y hacer un peek
        break;
}
}
int medico(){
    int opcion = 0;
    do{
    system("cls");
    printf("1)Erika\n2)Clara");
    scanf("%d", &opcion);

    }while(opcion<1 || opcion>2);
    return (opcion);
}
int medicos(){
    int opcion = 0;
    do{
    system("cls");
    printf("1)Victor\n2)Hugo López");
    scanf("%d", &opcion);
    }while(opcion<1 || opcion>2);
    return (opcion);
}
/* --------Sugerencia de driver program ----------*/

int main()
{
    int op = 0;
	printf ("Bienvenido\nElije una de las especialidades\n");
	printf ("1)Odontología\n2)Pedriatría");
	scanf("%d", &op);

	switch (op){
    case 1:
        printf("\nOdontología\n");
        int opc = medico ();
        switch (opc){
        case 1:
           printf ("\nDra Erika: ");
           int op = menu ();
           MENU(op);

        break;
        case 2:
            printf ("\nDra clara: ");
           int OP = menu ();
           MENU(OP);
        break;
        }
    break;
    case 2:
        printf("\nPedriatría\n");
        int opci = medicos ();
        switch (opci){
        case 1:
           printf ("\nDr víctor: ");
           int op = menu ();
           MENU(op);
           break;
        case 2:
            printf ("\nDr Hugo lópex: ");
           int OPC = menu ();
           MENU(OPC);
        break;

        }
    break;
}
    return 0;
	}







