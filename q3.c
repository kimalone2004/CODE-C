#include<stdio.h>
int main(){
		int x, y, temp;
			printf("Enter x: ");
			scanf("%d",&x);
			printf("Enter y : ") ;
			scanf("%d",&y);
		temp = x;
		x = y;
		y = temp;
			printf("Swap Success!!! x = %d , y = %d\n ",x,y);
}

