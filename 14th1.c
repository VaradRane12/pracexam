#include <stdio.h>
int main(){
    int row , column , i , j , choice = 0;
    printf("Enter number of rows :");
    scanf("%d" , &row);
    printf("Enter number of columns : ");
    scanf("%d" , &column);
    int a[row][column];
    int b[row][column];
    int sum[row][column];
    printf("Enter a choice 1. Read two matrices from user\n 2.Display two matrices\n 3. Find sum of two matrices");
    scanf("%d",&choice);
    switch(choice){
    case 1:{
    	printf("First matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("Enter element at row %d , column %d of array 1 :" ,i+1 , j+1 );
	            scanf("%d",&a[i][j]);
	        }
	        
	    }
	    printf("Second Matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("Enter element at row %d , column %d of array 2 :" ,i+1 , j+1 );
	            scanf("%d",&b[i][j]);
	        }
	        
	    }
		break;
	}
	    
	case 2:{
		 printf("First matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("Enter element at row %d , column %d of array 1 :" ,i+1 , j+1 );
	            scanf("%d",&a[i][j]);
	        }
	        
	        
	    }
	    printf("Second Matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("Enter element at row %d , column %d of array 2 :" ,i+1 , j+1 );
	            scanf("%d",&b[i][j]);
	        }
	        
	    }
	    
	    
	    
	    printf("First matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("%d ", a[i][j] );
	            
	        }
	        printf("\n");
	    }
	    printf("\n");
	    printf("Second matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("%d ", b[i][j]);
	            
	        }
	        printf("\n");
	    }
	    
		break;
	}
		  
	  	 
	case 3:{
		printf("First matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("Enter element at row %d , column %d of array 1 :" ,i+1 , j+1 );
	            scanf("%d",&a[i][j]);
	        }
	        
	    }
	    printf("Second Matrix: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
	        {
	            printf("Enter element at row %d , column %d of array 2 :" ,i+1 , j+1 );
	            scanf("%d",&b[i][j]);
	        }
	        
	    }
	    printf("Their Sum: \n");
	    for (i = 0; i < row; i++)
	    {
	        for ( j = 0; j < column; j++)
		        {
		            sum[i][j]=a[i][j]+b[i][j];
	            printf("%d ", sum[i][j]);
	        }
	        printf("\n");
	    }
		break;
	}
		
}
}
