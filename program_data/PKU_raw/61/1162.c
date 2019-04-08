void main()
{
	int n,a[21],b[21],j,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b[1]=1;
		b[2]=1;
		for(j=3;j<=a[i];j++)
		{ 
         b[j]=b[j-1]+b[j-2];
		}
		printf("%d\n",b[a[i]]);
	}
}
         