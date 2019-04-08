// ?????.cpp : ??????????????
//



int main()
{
	int x,y,a[100],b[100],i,j,n,m,p;
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;i<=100000;++i)
	{
		a[i]=x/2;
		x=x/2;
		if(a[i]==0) break;
	}
	n=i-1;
	for(i=1;i<=100000;++i)
	{
		b[i]=y/2;
		y=y/2;
		if(b[i]==0) break;
	}
	m=i-1;
	for(i=0;i<=n;++i)
	{
		for(j=0;j<=m;++j)
		{
			if(a[i]==b[j]) break;
		}
		if(a[i]==b[j]) break;
	}
	printf("%d\n",a[i]);
	return 0;
}
