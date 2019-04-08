int main()
{
	long n,i,a[100000]={0},k,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			
			for(j=(i+1);j<n;j++)
			{
				a[j-1]=a[j];
			}
			i-=1;
			n--;
		}

	}
	for(i=0;i<n;i++)
	{
		if(i==0)
			printf("%d",a[i]);
		else
			printf(" %d",a[i]);
	}

	return 0;

}