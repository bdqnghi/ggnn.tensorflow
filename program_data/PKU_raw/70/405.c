void main()
{
	int n;
	double x[100]={0.0},y[100]={0.0};
	double r[100]={0.0};
	double cx=0.0,tx=0.0,cy=0.0,ty=0.0,maxr=0.0,maxd=0.0;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		tx+= x[i];
		ty+= y[i];
	}
	cx = tx / n;
	cy = ty / n;
	for(i=0;i<n;i++)
	{
		r[i]=sqrt((x[i]-cx)*(x[i]-cx)+(y[i]-cy)*(y[i]-cy));
	}
	for(i=0;i<n;i++)
	{
		if (r[i]>maxr)
		{
			maxr=r[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if (r[i]<(maxr/2))
		{
			r[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(sqrt( (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) ) > maxd)
			{
				maxd = sqrt( (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) );
			}
		}
	}
	printf("%.4f\n",maxd);
}
