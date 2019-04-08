struct dis{
	int p1[3];
	int p2[3];
	double d;
};
void main()
{
	int a[10][3],i,j,k,r,n;
	struct dis dt[45],t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0,r=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			for (dt[r].d=0,k=0;k<3;k++)
			{
				dt[r].p1[k]=a[i][k];
				dt[r].p2[k]=a[j][k];
				dt[r].d+=(a[i][k]-a[j][k])*(a[i][k]-a[j][k]);
			}
			dt[r].d=sqrt(dt[r].d);
			r++;
		}
	}
	for (r=1;r<n*(n-1)/2;r++)
	{
		for (k=0;k<n*(n-1)/2-r;k++)
		{
			if (dt[k].d<=dt[k+1].d) 
			{
				t=dt[k];
				dt[k]=dt[k+1];
				dt[k+1]=t;
			}
		}
	}
	for (i=r-1;dt[i].d==dt[i-1].d;i--);
	for (j=r-1;j>i;j--)
	{
		for (k=r-1;k>=i+r-j;k--)
		{
			t=dt[k];
			dt[k]=dt[k-1];
			dt[k-1]=t;
		}
	}
		
	for (i=0;i<r;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",dt[i].p1[0],dt[i].p1[1],dt[i].p1[2],dt[i].p2[0],dt[i].p2[1],dt[i].p2[2],dt[i].d);
	}
}