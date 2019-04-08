int main()
{
	int a[5][5];
	int i,j,s,d,k,l,time=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=4;i++)
	{
		s=a[i][0];d=0;
		for(j=1;j<=4;j++)
		{
			if(a[i][j]>=s)
			{
				s=a[i][j];
				d=j;
			}
		}
        l=a[i][d];
		for(k=0;k<=4;k++)
		{
			if(a[k][d]<=l)l=a[k][d];
		}
		if(l==a[i][d])
		{
			i++;d++;
			printf("%d %d %d",i,d,l);
			time++;
			i--;
		}
	}
	if(time==0)printf("not found");
	return 0;
}