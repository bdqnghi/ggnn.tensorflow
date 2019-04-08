int main()
{
	int n,i,a[300],b[300],k,m=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		for(k=0;k<m;k++)
		{
			if(a[i]==b[k]) goto loop;
		}
		b[m]=a[i];
		m++;
loop:;
	}
	for(i=0;i<m-1;i++)
	{
		printf("%d,",b[i]);
	}
	printf("%d\n",b[m-1]);
	return 0;
}