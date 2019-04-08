int main()
{
	int a[8][8];
	int m, n;
	int i, j, max, k, x, y;
	int flag1, flag2=1;
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
	for (i=0;i<m;i++)
	{
		max=a[i][0];
		x=i;
		y=0;
		flag1=1;
		for (j=0;j<n;j++)
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
				x=i;
				y=j;
			}
		}
		for (k=0;k<m;k++)
		{
		    if (a[k][y]<max)
			{
				flag1=0;
				break;
			}
		}
		if (flag1) 
		{
			printf("%d+%d",x,y);
			flag2=0;
		}
	}
	if (flag2) printf("No");
	return 0;
}
