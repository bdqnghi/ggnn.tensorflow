double swap(double*x,double*y);
int main()
{
    int p,n,i,j;
	double q,x[11],y[11],z[11],px,py,pz,x1[46],y1[46],z1[46],x2[46],y2[46],z2[46];
	double l[46]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&x[i],&y[i],&z[i]);
	}
	p=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x1[p]=x[i];y1[p]=y[i];z1[p]=z[i];x2[p]=x[j];y2[p]=y[j];z2[p]=z[j];
			px=x[i]-x[j];py=y[i]-y[j];pz=z[i]-z[j];q=pow(px,2)+pow(py,2)+pow(pz,2);
			l[p]=pow(q,0.5);p++;
		}
	}
	p--;
	for(i=p;i>=0;i--)
	{
		for(j=0;j<p;j++)
		{
			if(l[j]<l[j+1])
			{
				swap(&l[j],&l[j+1]);
				swap(&x1[j],&x1[j+1]);swap(&y1[j],&y1[j+1]);swap(&z1[j],&z1[j+1]);
				swap(&x2[j],&x2[j+1]);swap(&y2[j],&y2[j+1]);swap(&z2[j],&z2[j+1]);
			}
		}
	}
	for(i=0;i<=p;i++)
	{
		printf("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n",x1[i],y1[i],z1[i],x2[i],y2[i],z2[i],l[i]);

	}
	return 0;
}
double swap(double*x,double*y)
{
	double t;
	t=*x;*x=*y;*y=t;
	return 0;
}
