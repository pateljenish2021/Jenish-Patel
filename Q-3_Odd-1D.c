#include<stdio.h>

void odd(int a[], int size) 
{
	int i;
	
    printf("\nOdd elements in the array: ");
    for(i=0; i<size; i++) 
	{
        if(a[i]%2 != 0) 
		{
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

main(){
	
    int size,i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter elements of the array\n");
    for(i=0; i<size; i++) 
	{
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    odd(a,size);
}
