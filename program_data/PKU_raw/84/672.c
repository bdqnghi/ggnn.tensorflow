int main()
{
	int a[100],i,j,k,n,f,m=0,o=0;
    scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=n;j<=100;j++)
	{
		a[j]=0;
	}
	
	for(k=0;k<=100;k++)
	{
		if(m<a[k])
			m=a[k];
	}
	for(f=0;f<=100;f++)
	{
		if((o<a[f])&&(a[f]!=m))
			o=a[f];
	}
	printf("%d\n%d\n",m,o);
	return 0;
}
