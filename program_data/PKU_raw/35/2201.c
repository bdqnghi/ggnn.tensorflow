int main()
{
	int a[8][8],i,j,k,c[8],b[8],opp,num;
	int m,n;
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i][0]);
		c[i]=a[i][0];
		b[i]=0;
		for (j=1;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if (a[i][j]>c[i])
			{
				c[i]=a[i][j];
				b[i]=j;
			}
		}
	}
    if((n==1)||(m==1))
	{printf("No");}
	else
	{
	opp=1;
	num=0;
	for ( i=0;i<m;i++)
	{	k=b[i];
		for (j=0;j<m;j++)
		{
			if (c[i]>a[j][k])
			{
				opp=0;break;
			}
		}
		if (opp==1)
		{printf("%d+%d",i,k);
		num=num+1;
		}
	}
	if (num==0)
	{printf("No");}
	}
	return 0;
}