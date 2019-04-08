int main()
{
	int N,i,k,b=0,sum=0;
	scanf("%d",&N);
	int *a=(int*)malloc(sizeof(int)*N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);	
	}
	scanf("%d",&k);	
	
	for(i=0;i<N;i++)
	{
		if(a[i]!=k)
		sum++;
		
	}
	for(i=0;i<N;i++)
	{
		
		if(a[i]!=k)
		{
			b++;
			if (b!=sum)
			printf("%d ",a[i]);
			else
			printf("%d",a[i]);		
		}
		
	}
	free(a);
	return 0;
	
}