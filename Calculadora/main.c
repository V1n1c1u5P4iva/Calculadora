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
	    printf("Bem-vindo ao programa de c�lculo! Por favor, escolha uma opera��o:\n");
	    printf("1. Divis�o\n");
	    printf("2. Adi��o\n");
	    printf("3. Subtra��o\n");
	    printf("4. Multiplica��o\n");
	    printf("5. Sair\n");
	    printf("Digite o n�mero da opera��o escolhida: ");
	    scanf("%d",&op);
	    
	    switch(op)
	    {
	        case 1:
	            printf("Voc� escolheu a divis�o. Por favor, digite dois n�meros.\n");
	            for(i=0;i<2;i++){
	                printf("Digite o n�mero %d: ",i+1);
	                scanf("%lf",&num[i]);
	            }
	            
	            result=num[0]/num[1];
	            printf("O resultado da divis�o �: %lf\n",result);
	            system("PAUSE");
	            break;
	        case 2:
	            printf("Voc� escolheu a adi��o. Quantos n�meros voc� gostaria de somar?\n");
	            scanf("%d",&qt);
	            result=0;
	            for(i=0;i<qt;i++){
	                printf("Digite o %d� n�mero : ",i+1);
	                scanf("%lf",&num[i]);
	                
	                result+=num[i];
	            }
	            
	            printf("O resultado da soma �: %lf\n",result);
	              system("PAUSE");
	            break;
	        	 
	        case 3:
	            printf("Voc� escolheu a subtra��o. Quantos n�meros voc� gostaria de subtrair?\n");
	            scanf("%d",&qt);
	            
	            printf("Digite o 1� n�mero: ");
	            scanf("%lf",&num[0]);
	            result = num[0];
	            
	            for(i=1;i<qt;i++){
	                printf("Digite o %d� n�mero: ",i+1);
	                scanf("%lf",&num[i]);
	                
	                result-=num[i];
	            }
	            printf("O resultado da subtra��o �: %lf\n",result);
	             system("PAUSE");
	            break;
	        case 4:
	            printf("Voc� escolheu a multiplica��o. Quantos n�meros voc� gostaria de multiplicar?\n");
	            scanf("%d",&qt);
	            result=1;
	            for(i=0;i<qt;i++){
	                printf("Digite o %d� n�mero: ",i+1);
	                scanf("%lf",&num[i]);
	                
	                result*=num[i];
	            }
	            
	            printf("O resultado da multiplica��o �: %lf\n",result);
	             system("PAUSE");
	            break;
	        case 5:
	            printf("Voc� escolheu sair. Obrigado por usar o programa!\n");
	            system("PAUSE");
	            break;
	        default:
	            printf("Op��o inv�lida. Por favor, tente novamente.\n");
	            system("PAUSE");
	            break;
	    }
	}while(op!=5);
	
    return 0;
}

