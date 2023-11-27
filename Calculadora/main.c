#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    double *num,result;
    int i,qt, op;
    setlocale(LC_ALL,"Portuguese");
   
    num=(double*)malloc(sizeof(double));
	do{	  
		system("CLS");  
	    printf("Bem-vindo ao programa de cálculo! Por favor, escolha uma operação:\n");
	    printf("1. Divisão\n");
	    printf("2. Adição\n");
	    printf("3. Subtração\n");
	    printf("4. Multiplicação\n");
	    printf("5. Sair\n");
	    printf("Digite o número da operação escolhida: ");
	    scanf("%d",&op);
	    
	    switch(op)
	    {
	        case 1:
	            printf("Você escolheu a divisão. Por favor, digite dois números.\n");
	            for(i=0;i<2;i++){
	                printf("Digite o número %d: ",i+1);
	                scanf("%lf",&num[i]);
	            }
	            
	            result=num[0]/num[1];
	            printf("O resultado da divisão é: %lf\n",result);
	            system("PAUSE");
	            break;
	        case 2:
	            printf("Você escolheu a adição. Quantos números você gostaria de somar?\n");
	            scanf("%d",&qt);
	            result=0;
	            for(i=0;i<qt;i++){
	                printf("Digite o %d° número : ",i+1);
	                scanf("%lf",&num[i]);
	                
	                result+=num[i];
	            }
	            
	            printf("O resultado da soma é: %lf\n",result);
	              system("PAUSE");
	            break;
	        	 
	        case 3:
	            printf("Você escolheu a subtração. Quantos números você gostaria de subtrair?\n");
	            scanf("%d",&qt);
	            
	            printf("Digite o 1º número: ");
	            scanf("%lf",&num[0]);
	            result = num[0];
	            
	            for(i=1;i<qt;i++){
	                printf("Digite o %d° número: ",i+1);
	                scanf("%lf",&num[i]);
	                
	                result-=num[i];
	            }
	            printf("O resultado da subtração é: %lf\n",result);
	             system("PAUSE");
	            break;
	        case 4:
	            printf("Você escolheu a multiplicação. Quantos números você gostaria de multiplicar?\n");
	            scanf("%d",&qt);
	            result=1;
	            for(i=0;i<qt;i++){
	                printf("Digite o %d° número: ",i+1);
	                scanf("%lf",&num[i]);
	                
	                result*=num[i];
	            }
	            
	            printf("O resultado da multiplicação é: %lf\n",result);
	             system("PAUSE");
	            break;
	        case 5:
	            printf("Você escolheu sair. Obrigado por usar o programa!\n");
	            system("PAUSE");
	            break;
	        default:
	            printf("Opção inválida. Por favor, tente novamente.\n");
	            system("PAUSE");
	            break;
	    }
	}while(op!=5);
	
    return 0;
}

