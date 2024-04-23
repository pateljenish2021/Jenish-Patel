#include<stdio.h>

void even(int *a, int size) 
{
	int i;
	
    printf("\nEven elements in the array: ");
    for(i=0; i<size; i++) 
	{
        if(*(a + i)%2 == 0) 
		{
            printf("%d ", *(a + i));
        }
    }
    printf("\n");
}

main(){
    int i,size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];
    
    printf("Enter elements of the array\n");
    
    for(i=0; i<size; i++) 
	{
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    even(a, size);
}
