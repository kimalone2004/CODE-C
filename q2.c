#include<stdio.h>
int main(){ 
	int ngay, thang, nam, maxDay; 
		printf("Input dd mm yyyy: ");
		scanf("%d %d %d", &ngay, &thang, &nam);
	switch(thang){
			case 1:		case 3:		case 5:		case 7:		case 8:		case 10:	case 12:
				maxDay= 31;
		break;
			case 4:		case 6:		case 9:		case 11:
				maxDay = 30 ; 
		break;
			case 2: if (nam%4) {
				maxDay = 29;
	}
					else maxDay = 28;
				default: printf("Invalid Date");
			}
			if(ngay<maxDay && ngay>0){
					printf("Valid Date");
			} else {
					printf("Invalid date");
				}
}
