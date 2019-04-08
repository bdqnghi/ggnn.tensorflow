int main()
{
	int a[500],n,i,j=0,b,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		if(b%2!=0)
		{
			a[k]=b;
			k+=1;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-1;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d",a[k-1]);
	return 0;
}