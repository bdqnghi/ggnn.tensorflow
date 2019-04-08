int main()
{
	int n,a[100000],i,k,q,j,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	i=0;
	for(q=0;q<n;q++)
	{
		if(a[i]==k)
		{
			for(j=i;j<(n-1);j++)
				a[j]=a[j+1];
			i=i-1;
			l++;
		}
		i++;
	}
	for(i=0;i<n-l;i++)
	{
		if(i<(n-l-1))
		     printf("%d ",a[i]);
		if(i==(n-l-1))
			printf("%d",a[i]);
	}
	scanf("%d",1);
	return 0;
}