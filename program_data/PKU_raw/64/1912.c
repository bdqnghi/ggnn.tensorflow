int main()
{
  struct pointlong
  {
	int a1;
	int b1;
	int c1;
	int a2;
	int b2;
	int c2;
	double sl;
  };
    struct pointlong point[10000];
	int x[11]={0};
	int y[11]={0};
	int z[11]={0};
	double a[11][11]={0};
	double c[1000]={0};
	int i,j,n,k,p,sum,w,f;
	float m;
	double temp;
	k=0;
	w=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	sum=n*(n-1)/2;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			m=(float)(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
			a[i][j]=sqrt(m);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			c[k]=a[i][j];
			k=k+1;
		}
	}
	for(i=1;i<sum;i++)
	{
		for(j=0;j<sum;j++)
		{
			if(c[j]<c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	for(i=0;i<=sum;i++)
	{
		for(j=0;j<n;j++)
		{
			for(p=j+1;p<n;p++)
			{
				if(a[j][p]==c[i])
				{
					point[w].a1=x[j];
					point[w].b1=y[j];
					point[w].c1=z[j];
					point[w].a2=x[p];
					point[w].b2=y[p];
					point[w].c2=z[p];
				    point[w].sl=c[i];
					w=w+1;

				}
			}
		}
	}
	for(i=0;i<w;i++)
	{
         f=0;
		for(j=0;j<i;j++)
		{
			if(point[i].a1==point[j].a1&&point[i].b1==point[j].b1&&point[i].c1==point[j].c1&&point[i].sl==point[j].sl&&point[i].a2==point[j].a2&&point[i].b2==point[j].b2&&point[i].c2==point[j].c2)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{

	
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",point[i].a1,point[i].b1,point[i].c1,point[i].a2,point[i].b2,point[i].c2,point[i].sl);
		}
	}
	return 0;
}
