#include<stdio.h>
int main(){ 
		printf("Enter an expression (+ - * /): "); 
	char op; 
	int num1, num2, res;
		scanf("%d %c %d", &num1, &op,&num2);
			switch(op){
				case '+': {
					res = num1 + num2;
					printf("res: %d", res); 
					break;
				}
				case '-':{
					res = num1 - num2;
					printf("res: %d", res); 
					break;
				}
				case '*':{
					res = num1 * num2;
					printf("res: %d", res); 
					break;	
				}
				case '/':{
					if(num2==0){
						printf("Num 2 is zero!\n res: Invalid!!");
						return;
					}
					else if(num2!=0) {
						res = num1 / num2;
						printf("res: %d", res); 
					}
					break;
				}
			default: {
				printf("Invalid!!!");
				break; 
			}
		}
}
				
