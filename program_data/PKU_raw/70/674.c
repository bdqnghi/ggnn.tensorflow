void main()
{
	int i,j,k=0,n;
	double t,x[100],y[100],d[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf %lf",&x[i],&y[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			k++;
		}
	}
	for(j=0;j<k;j++)
		for(i=0;i<k-j;i++)
			if(d[i]<d[i+1])
			{
				t=d[i];
				d[i]=d[i+1];
				d[i+1]=t;
			}
			printf("%.4lf\n",d[0]);
}
