void main()
{
	int n;
	scanf("%d",&n);
	for(;;)
	{   
		if(n==1) break;
		if(n%2==1)
		{
		   
		   printf("%d*3+1=%d",n,n*3+1);
		   n=n*3+1;
		}
		    
		else 
		{
			printf("%d/2=%d",n,n/2);
			n=n/2;
		}	
		printf("\n");
		
	}
	printf("End");
}