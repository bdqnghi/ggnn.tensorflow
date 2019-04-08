int main()
{
	struct distance
	{
		int x;
		int y;
		double l;
	};
	struct distance d[100];
	int n,i,k,mount,tx,ty,j;
	int a[11][4];
	double s[11][11];
	double t,tl;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
	}
	k=1;
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			t=(double)((a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])+(a[i][3]-a[j][3])*(a[i][3]-a[j][3]));
			s[i][j]=sqrt(t);
			d[k].l=s[i][j];
			d[k].x=i;
			d[k].y=j;
			k++;
		}
	}
	mount=n*(n-1)/2;
	if(mount>=2)
	{
	for(i=1;i<=mount-1;i++)
	{
		for(j=mount-1;j>=i;j--)
		{
			if(d[j].l<d[j+1].l)
			{
				tx=d[j].x;
				ty=d[j].y;
				tl=d[j].l;
				d[j].x=d[j+1].x;
				d[j].y=d[j+1].y;
				d[j].l=d[j+1].l;
				d[j+1].x=tx;
				d[j+1].y=ty;
				d[j+1].l=tl;
			}
		}
	}
	}
	for(i=1;i<=mount;i++)
	{
		tx=d[i].x;
		ty=d[i].y;
		tl=d[i].l;
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[tx][1],a[tx][2],a[tx][3],a[ty][1],a[ty][2],a[ty][3],tl);
	}
	return 0;
}