// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>
main()
{
	int i, j, As, Bs, a[20], b[20], temp;
	
	printf("Enter first array size : ");
	scanf("%d",&As);
	printf("\n");
	
		for(i=0;i<As;i++)
		{
			printf("Enter first array values : ");
			scanf("%d",&a[i]);
		}
		printf("\n");
	
	printf("Enter second array size : ");
	scanf("%d",&Bs);
	printf("\n");
	
		for(i=0;i<Bs;i++)
		{
			printf("Enter second array values : ");
			scanf("%d",&b[i]);
		}
	
	printf("\n 1.  Ascending order \n 2.  Descending order \n\n");
	printf("Enter sorting type : ");
	scanf("%d",&i);
	
	switch(i)
	{
	case 1:
		for (i = 0; i < As; i++) {		// Sort first array in Ascending order
			for (j = i+1; j < As; j++) {     
	           if(a[i] > a[j]) {
			       
	               temp = a[i];    
	               a[i] = a[j];    
	               a[j] = temp;    
           		}     
        	}     
    	}
		
		printf("\nSorted in ascending order of first array : ");    
    	for (i = 0; i < As; i++) 
		{     
        	printf("%d, ", a[i]);    
    	}
    	
    	for (i = 0; i < Bs; i++) {		// Sort second array in Ascending order
			for (j = i+1; j < Bs; j++) {     
	           if(b[i] > b[j]) {
			       
	               temp = b[i];    
	               b[i] = b[j];    
	               b[j] = temp;    
           		}     
        	}     
    	}
		
		printf("\n\nSorted in ascending order of second array : ");    
    	for (i = 0; i < Bs; i++) 
		{     
        	printf("%d, ", b[i]);    
    	}
		break;    
		
	case 2:
		for (i = 0; i < As; i++) {		// Sort first array in Descending order
			for (j = i+1; j < As; j++) {     
	           if(a[i] < a[j]) {
			       
	               temp = a[i];    
	               a[i] = a[j];    
	               a[j] = temp;    
           		}     
        	}     
    	}
		
		printf("\nSorted in Descending order of first array : ");    
    	for (i = 0; i < As; i++) 
		{     
        	printf("%d, ", a[i]);    
    	}
    	
    	for (i = 0; i < Bs; i++) {		// Sort second array in Descending order
			for (j = i+1; j < Bs; j++) {     
	           if(b[i] < b[j]) {
			       
	               temp = b[i];    
	               b[i] = b[j];    
	               b[j] = temp;    
           		}     
        	}     
    	}
		
		printf("\n\nSorted in Descending order of second array : ");    
    	for (i = 0; i < Bs; i++) 
		{     
        	printf("%d, ", b[i]);    
    	}
		break;
	}
}
