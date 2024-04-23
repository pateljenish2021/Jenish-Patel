#include<stdio.h>

float calcAvg(int r,int c, int a[r][c]) 
{
    float avg,sum = 0;
    int i,j,count = 0;
    
    for(i=0; i<r; i++) 
	{
        for(j=0; j<c; j++) 
		{
            sum = sum + a[i][j];
            count++;
        }
    }
    
    avg = sum / count;
    return avg;
}

main(){
    int r,c,i,j;
    float avg;
    
    printf("Enter the 2D array's row size: ");
    scanf("%d", &r);
    printf("Enter the 2D array's column size: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter elements of the 2D array:\n");
   for(i=0;i<r;i++)
	 {
        for(j=0;j<c;j++) 
		{
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    avg = calcAvg(r,c,a);

    printf("\nAverage of all elements in the 2D array: %.2f\n", avg);
}
