int main()
{
	int a[20000],i,j,m,k,n;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(i=1;i<k;i++)
	{
		for(j=0,m=1;j<=i-1;j++)
		{
			if(a[i]==a[j])
			n=0;
			else
				n=1;
			m=m*n;
		}
		if(m==1)
			printf(" %d",a[i]);
			

	}
	return 0;
}
	