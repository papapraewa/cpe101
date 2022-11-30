#include<stdio.h>
#include<conio.h>
int main(){
	int s;
	printf("Enter Score: ");
	scanf("%d",&s);
	if(s<50){
		printf("Grade = F");
	}else if(s>50 && s<60){
		printf("Grade = D");
	}else if(s>60 && s<70){
		printf("Grade = C");
	}else if(s>70 && s<80){
		printf("Grade = B");
	}else if(s>80){
		printf("Grade = A");
	}else{
		printf("Plese Enter A correstscore");
	}
}
