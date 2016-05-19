#include <stdio.h>
#include <math.h>
#include "binaryF.h"

/* These functions convert floating-point numbers in 
 * binary numbers (base 2) and binary for floating-point numbers. 
 * Using the IEEE 754 floating-point standard.
 * created by: Jeferson Juliani
*/

int bi[32];

struct fb{
	int mantissa[23], depois;
	float valor, antes;
	};
struct fb x;

void separa(float y,struct fb *x){
    x->depois=y;
    x->antes=y - x->depois;
}


int expoent(float y,struct fb *x){
    int cont=0;
    while(y/2>2){
        y=y/2;
        cont++;
    }
		y=y/2;
        cont++;
    x->valor=y;
    return cont;
}


void mantissa(float y,struct fb *x){
    int i=0;
    separa(x->valor,x);
    while(i<23){
        x->valor=(x->antes)*2;
        separa(x->valor,x);
        x->mantissa[i]=x->depois;
        printf("%d",x->mantissa[i]);
        i++;
        
    }
}

void convert(int num){
    if (num/2==1 || 0)
        printf("%d",num/2);
    else
        convert(num/2);
        printf("%d",num%2);
}

void converteFB(float y){
    int z;
    if(y>0){
        printf("0-");
		z=expoent(y,&x);
		convert(z+127);
		printf("-");
		mantissa(y,&x);
    }else{
		printf("1-");
		y=y*(-1);
		z=expoent(y,&x);
		convert(z+127);
		printf("-");
		mantissa(y,&x);
		}    
		printf("\n");
}

void preenche(int x[]){
	int i,y;
	for(i=0;i<32;i++){
		scanf("%d",&y);
		x[i]=y;
		}
	}

int expoentBi(int x[]){
	int i,y, aux=0;
	for(i=1,y=7;i<9;i++, y--){
		if(x[i]==1)
			aux= aux + pow(2,y);
		}
	return aux-127;
	}

void normalizada(int x[]){
	int i,y,z;
	float aux=0;
	for(i=9,y=1;i<32;i++,y++){
		if(x[i]==1)
			aux=aux+ (1/pow(2,y));
	}
	aux+=1;
	z=expoentBi(x);
	aux*=pow(2,z);
	if(x[0]==1){
		printf("%.2f\n", -1*aux);
		}else{
			printf("%.2f\n",aux);
			}
}

void desNormalizada(int x[]){
	int i,y;
	if(x[0]==1)
		printf("-");
	for(i=9,y=1;i<32;i++,y++){
		if(x[i]==1){
				printf("2^-%d ",y);
				if (i<32)
					printf("+");
			}
}	if(x[0]==1)
		printf("* 2^⁻126\n");
}

