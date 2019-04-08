void main()
{
	int n,i,j,k;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
    i=0;    

	
	while(i<n-1)
	{
		k=0;
        
		for(j=0;j<=i;j++)
			if(a[i+1]!=a[j])
				k++;
		if(k==(1+i))
			printf(",%d",a[i+1]);
		i++;
	}
}

			    

		