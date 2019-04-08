double f(double x1,double y1,double x2,double y2)
{
	double d;
	d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return(d);
}
void main()
{
	int i,j,n;
	double dis;
	double x[100],y[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	dis=f(x[0],y[0],x[1],y[1]);
	for(j=0;j<n;j++)
	{
		for(i=j+1;i<n-1;i++)
		{
			if(f(x[i],y[i],x[j],y[j])>dis)
			{
				dis=f(x[i],y[i],x[j],y[j]);
			}
		}
	}
	printf("%.4f\n",dis);
}
