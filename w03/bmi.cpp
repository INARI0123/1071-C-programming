#include<stdio.h>

int main(){
	float A,B,C;
	printf("����(cm): ");
	scanf("%f",&A);
	printf("�魫(kg): ");
	scanf("%f",&B);
	C=B/(A*A/10000);
	printf("�A��BMI:%f \n",C);
	
	if (C<18.5) { printf("�魫�L��\n");	}
	else if(C>=18.5 && C<24) {printf("���`�d��\n");	}
	else if(C>=24 && C<27) {printf("�L��\n");	}
	else if(C>=27 && C<30) {printf("���תέD\n");	}
	else if(C>=30 && C<35) {printf("���תέD\n");	}
	else if(C>=35) {printf("���תέD\n");	}
    else{ printf("�z��J���X�z�Ʀr\n") ;} 
	
}
