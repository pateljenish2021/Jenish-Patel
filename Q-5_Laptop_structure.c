#include<stdio.h>

struct Laptop{
    char comp_name[50];
    char pro[50];
    float price;
};

main(){
    int n,i,j=1,k=1;

    printf("Enter the number of laptops: ");
    scanf("%d",&n);

    struct Laptop l[n];

    for(i=0; i<n; i++) 
	{
        printf("\nEnter details for laptop %d\n\n", j++);
        
        printf("Company name: ");
        scanf("%s", l[i].comp_name);
        printf("Processor: ");
        scanf("%s", l[i].pro);
        printf("Price: ");
        scanf("%f", &l[i].price);
    }
	printf("\n-------------------------------------------\n");
    printf("\nDetails of all laptops\n\n");
    
    for(i=0; i<n; i++) 
	{
        printf("Laptop %d\n", k++);
        
        printf("Company name: %s\n", l[i].comp_name);
        printf("Processor: %s\n", l[i].pro);
        printf("Price: %.2f\n", l[i].price);
        printf("\n");
    }
}
