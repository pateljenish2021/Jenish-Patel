#include<stdio.h>

main(){
    int math,chem,phy,comp,eng;
    float avg;
    char grade;

    printf("Enter marks for Maths: ");
    scanf("%d", &math);

    printf("Enter marks for Chemistry: ");
    scanf("%d", &chem);

    printf("Enter marks for Physics: ");
    scanf("%d", &phy);

    printf("Enter marks for Computer: ");
    scanf("%d", &comp);

    printf("Enter marks for English: ");
    scanf("%d", &eng);

    avg = (math + chem + phy + comp + eng) / 5;
    
    if(avg >= 90) 
		{grade='A';}
		
	else if(avg >= 80) 
		{grade='B';}
		 
	else if(avg >= 70) 
		{grade='C';}
		 
	else if(avg >= 60) 
		{grade='D';}
		 
	else 
		{grade='F';}

    printf("\nAverage marks: %.2f\n", avg);
    printf("Your Grade is: %c\n", grade);
}
