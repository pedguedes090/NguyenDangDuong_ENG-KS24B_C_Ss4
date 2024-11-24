#include<stdio.h>
int main(){
	int number1,number2,number3,l;
	scanf("%d%d%d",&number1,&number2,&number3);
	if(number1<number3 && number2 > number3){//1 3 2
		l = number2;
		number2 = number3;
		number3 =l;
		printf("%d%d%d",number1,number2,number3);
	}else if(number2<number3 && number1 > number3){//2 3 1
		l = number1;
		number1 = number2;
		number2=number3;
		number3 =l;
		printf("%d%d%d",number1,number2,number3);
	}else if(number3<number1 && number1 < number2){//3 1 2
		l = number2;		
		number2 = number1;
		number1=number3;
		number3 =l;
		printf("%d%d%d",number1,number2,number3);
	}else if(number3<number2 && number2< number1){//3 2 1
		l = number1;		
		
		number1=number3;
		number3 =l;
		printf("%d%d%d",number1,number2,number3);
	}else if(number2<number1 && number1< number3){//2 1 3
		l = number1;		
		
		number1=number2;
		number2 =l;
		printf("%d%d%d",number1,number2,number3);
	}else{// 1 2 3
		printf("%d%d%d",number1,number2,number3);
	}
}
