int main()
{
	int a[100];
	int n,i,j,k,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
      scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			
				k=a[i];
				a[i]=a[i+1];
				a[i+1]=k;
			

		}
	}
	for(i=0;i<n;i++)
	{
		if(s==0)
		{
           printf("%d",a[i]);
		   s=1;
		}
		else
			printf(" %d",a[i]);
	}
		return 0;
}

