int k,n1,n2,a[100],b[100],flag=0;
paixu(int m,int x[])
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m-1;j++)
		{
			if(x[j]>x[j+1])
			{
				x[j]=x[j]+x[j+1];
				x[j+1]=x[j]-x[j+1];
				x[j]=x[j]-x[j+1];
			}
		}
	}
}
output(int m,int x[])
{
	int i;
	for(i=1;i<=m;i++)
	{
		if(flag)printf(" ");
		printf("%d",x[i]);
		flag=1;
	}
}
main()
{
	scanf("%d%d",&n1,&n2);
for(k=1;k<=n1;k++)scanf("%d",&a[k]);
for(k=1;k<=n2;k++)scanf("%d",&b[k]);
	paixu(n1,a);
	paixu(n2,b);
	output(n1,a);
	output(n2,b);
}
