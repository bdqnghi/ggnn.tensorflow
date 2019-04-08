int main()
{
	int i,j,n,a[20],number=0,e=0,f=1,g=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<a[i];j++)
		{
			number=e+f;
			g=e;
			e=number;
			f=g;
			
		}
		printf("%d\n",number);
		number=0;
		e=0;
		f=1;
	}
	return 0;
}