#include <stdio.h>
#include<stdlib.h>
/*------- funciones para driver program ------*/
int menu(){
    int opcion = 0;
do{
    system("cls");
    printf("1) Darse de baja\n");
    printf("2) Observar mis datos\n");
    printf("3) Modificar sus datos\n");
    scanf("%d", &opcion);

}while(opcion<1 || opcion>3);
     return (opcion);
}
int medico(){
    int opcion = 0;
    do{
    system("cls");
    printf("1)Dra. Erika\n2)Dra. Clara");
    scanf("%d", &opcion);

    }while(opcion<1 || opcion>2);
    return (opcion);
}
int medicos(){
    int opcion = 0;
    do{
    system("cls");
    printf("1)Dr. Victor\n2)Dr. Hugo López");
    scanf("%d", &opcion);
    }while(opcion<1 || opcion>2);
    return (opcion);
}


/* --------driver program ----------*/

int main()
{
    size_t op = 0;
	printf ("Bienvenido\nInserta tu Numero de folio\n");
	scanf("%ld", &op);
    if (findif(op) == true){ // se esncontró al paciente
        menu();
    }
    else{
        printf("\nSu número de folio no se encontró, favor de darse de alta aquí mismo");
        printf("\nElija su especialidad");
        switch (op){
    case 1:
        printf("\nOdontología\n");
        int opc = medico ();
        switch (opc){
        case 1:
           printf ("\nDra Erika: ");
        break;
        case 2:
            printf ("\nDra clara: ");
        break;
        }
    break;
    case 2:
        printf("\nPedriatría\n");
        int opci = medicos ();
        switch (opci){
        case 1:
           printf ("\nDr víctor: ");
           break;
        case 2:
            printf ("\nDr Hugo lópex: ");
        break;

        }
    break;
}

    }
}
