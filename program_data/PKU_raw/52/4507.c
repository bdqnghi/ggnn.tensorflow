int main()
{
	int n,i,k;
	int a[100],b[100];
	scanf("%d%d",&n,&k);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=(n-1);i++)
	{
		if(i<=(n-1-k))
		{
			b[i+k]=a[i];
		}
		else
		{
			b[i+k-n]=a[i];
		}
	}
	for(i=0;i<=(n-1);i++)
	{
		if(i==0)
		printf("%d",b[0]);
		else 
	    printf(" %d",b[i]);
	}
}