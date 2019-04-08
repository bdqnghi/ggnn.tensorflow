void main()
{
	int n,i,j,k=0;
	char a[1000][40]={'0'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);


   for(i=0;a[0][i]!='\0';i++)
	   
		   {
		   printf("%c",a[0][i]);
		   k++;
	
		   }

	for(j=1;j<n;j++)
	   
	{
		if((signed)strlen(a[j])<=80-k-1)
		
	   {
		   printf(" ");
		   k++;
		   for(i=0;a[j][i]!='\0';i++)
	   
		   {
		   printf("%c",a[j][i]);
		   k++;
	
		   }
	   }

	   
		  

		else 
		   {
			   printf("\n");
			   k=0;
			   for(i=0;a[j][i]!='\0';i++)
			   {
				   printf("%c",a[j][i]);
					   k++;
			   }
			 
		   }
	}

}
