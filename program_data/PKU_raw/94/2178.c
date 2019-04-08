int main()
{
	int a[500];
	int n,i,j,k,temp;
	j=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&k);
		if (k%2==1) 
		{
			a[j]=k;
			j++;
		}
	}
    for (i=j-1;i>=0;i--)
	{
		for (k=0;k<i;k++)
		{
			if (a[k]>a[k+1])
			{
				temp=a[k+1];
				a[k+1]=a[k];
				a[k]=temp;
			}
		}
	}
	for (i=0;i<j-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d",a[j-1]);
	return 0;
}
