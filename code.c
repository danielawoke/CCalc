#include <stdio.h>
double add(int a, int b){
	return a+b;
}
double subtract(int a, int b){
	return a-b;
}
double multiply(int a, int b){
	return a*b;
}
double divide(int a, int b){
	return a/b;
}
int main(){
	int cond = 1;
	while(cond == 1){
		float a = 0;
		float b = 0;
		int op = -1;
		printf("\nEnter the first number\n");
		scanf("%f",&a);
		printf("\nEnter the second number\n");
		scanf("%f",&b);
		printf("\n1=+;2=-,3=*,4=/\n");
		scanf("%i",&op);
		if(op == 1){
			printf("%f\n", add(a,b));
		}
		if(op == 2){
			printf("%f\n", subtract(a,b));
		}
		if(op == 3){
			printf("%f\n", multiply(a,b));
		}
		if(op == 4){
			printf("%f\n", divide(a,b));
		}
		printf("go again? 1=yes,0=no\n");
		scanf("%d",&cond);
	}
	
}


