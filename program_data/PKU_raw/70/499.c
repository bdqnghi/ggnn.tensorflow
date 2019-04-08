void main()
{
	float a[100],b[100];
	double f(float x,float y,float z,float w);
	int i,j,n;
	double d=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(f(a[i],a[j],b[i],b[j])>d)
				d=f(a[i],a[j],b[i],b[j]);
		}
	}
	d=(float)d;
	printf("%.4f\n",d);
}
double f(float x,float y,float z,float w)
{
	double s;
	s=sqrt((x-y)*(x-y)+(z-w)*(z-w));
	return(s);
}
