int main()
{
	int n,a[20100],i,j;
	scanf("%d",&n);
	scanf("%d",a);
	printf("%d",*a);
	for(i=1;i<n;i++)
	{
		scanf("%d",a+i);
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i]) break;
		}
		if(j==i) printf(" %d",*(a+i));
	}
}