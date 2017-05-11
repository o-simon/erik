#include "stdio.h"
int main()
{
    int opcion,num1,num2;
    do
    {
             system("cls");
             system("color 17");
             printf("Hola este es su calculadora mota 1.0\n1)sumar\n2)restar\n3)multiplicar\n4)dividir\nPresion el numero de la opcion: ");
             scanf("%d",&opcion);
             getchar();
             switch(opcion)
             {
                           case 1:
                                system("cls");
                                printf("ingrese el primer numero a sumar: ");
                                scanf("%d",&num1);
                                getchar();
                                printf("\ningrese el segundo numero a sumar: ");
                                scanf("%d",&num2);
                                getchar();
                                system("cls");
                                printf("el resultado de la suma es: %d \n",(num1+num2));
                                getchar();
                           break;
                           case 2:
                                system("cls");
                                printf("ingrese el primer numero a restar: ");
                                scanf("%d",&num1);
                                getchar();
                                printf("\nnumero de restar: ");
                                scanf("%d",&num2);
                                getchar();
                                system("cls");
                                printf("el resultado de la resta es: %d \n",(num1-num2));
                                getchar();
                           break;
                           case 3:
                                system("cls");
                                printf("ingrese el primer numero a multiplicar: ");
                                scanf("%d",&num1);
                                getchar();
                                printf("\ningrese el segundo numero a multiplicar: ");
                                scanf("%d",&num2);
                                getchar();
                                system("cls");
                                printf("el resultado de la multiplicar es: %d \n",(num1*num2));
                                getchar();
                           break;
                           case 4:
                                system("cls");
                                printf("ingrese el primer numero a dividir: ");
                                scanf("%d",&num1);
                                getchar();
                                printf("\nnumero divisor: ");
                                scanf("%d",&num2);
                                getchar();
                                system("cls");
                                printf("el resultado de la division es: %d \n",(num1/num2));
                                getchar();
                           break;
                           case 5:
                                printf("Gracias por usar la calcculadora mota 1.0 que pase un feliz dia presione una tecla para salir \n");
                                getchar();
                                return 0;
                           break;
                    }
                                      
                                 
    }while(opcion!=5); 
}
