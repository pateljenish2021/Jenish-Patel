#include<stdio.h>

main(){
    int n,i,j=1;

    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    FILE *file = fopen("data.txt", "w");
    if(file == 0) 
	{
        printf("Error Opening File\n");
    }
    else
    {
    	printf("File Succesfully Opened\n");
	}

    for(i=0; i<n; i++) 
	{
        char f_name[100],c_name[100];
        
        printf("\nEnter detail of Fruit : %d\n",j++);
        printf("\nEnter Fruit name: ");
        scanf("%s", f_name);
        printf("Enter Color name of %s: ", f_name);
        scanf("%s", c_name);
        
        fprintf(file, "%s = %s\n", f_name, c_name);
    }
    fclose(file);
}
