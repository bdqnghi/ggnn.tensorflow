
int main()
{
	long i,j,n,m,x,p=0;
	int a[100001]={0};
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{scanf("%d",&x);a[x]++;}
	for(i=0;i<=100000;i++)
	{
		for(j=1;j<=a[i];j++)
			if(p==0){printf("%d",i);p=1;}
			else printf(" %d",i);
	    a[i]=0;
	}
	for(i=1;i<=m;i++)
	{scanf("%d",&x);a[x]=1;}
	for(i=0;i<=100000;i++)
	{
		for(j=1;j<=a[i];j++)
			printf(" %d",i);
	    a[i]=0;
	}
    return 0;
}