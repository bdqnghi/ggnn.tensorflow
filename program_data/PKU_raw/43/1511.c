int main()
{
	int m,n,l,i,j,a[10000],k=1;
	scanf("%d",&m);
    for(i=3;i<=m;i=i+2)
	{
		for(j=3;j<=i-1;j++)
			if(i%j==0)break;
			if(j>=i)
			{a[k]=i;
			k++;}
	}
    for(n=1;n<=k;n++)
	{for(l=n;l<=k;l++)
	if(a[n]+a[l]==m)
		printf("%d %d\n",a[n],a[l]);
	}
	
	return 0;
}