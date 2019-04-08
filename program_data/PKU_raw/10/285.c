

void main()
{
	int k;
	int n=1,i=0,j=0;
	scanf("%d", &k);
	int *a=(int *)malloc(k*sizeof(int));
	int *b=(int *)malloc(k*sizeof(int));
    for(i=0;i<k;i++)
	{
		scanf("%d", &a[i]);
		b[i]=1;
	}

	
 	for(i=k-1;i>=0;i--)
	{
		for(j=k-1;j>i;j--)
		{
			if(a[i]>=a[j])
				b[i]=b[i]>b[j]?b[i]:b[j]+1;
		
	
		}
	}
		
	
	for(i=0;i<k;i++)
	{
		n=n>b[i]?n:b[i];
	}
	printf("%d", n);
	free(a);
	free(b);



}