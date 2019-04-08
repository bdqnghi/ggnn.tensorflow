struct point
{
	double x;
	double y;
}a[100];
void main()
{
	double di(double x1,double y1,double x2,double y2);
	int n,i,j,k=0;
	double max,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a[i].x,&a[i].y);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n-i;j++)
		{
				b[k]=di(a[i].x,a[i].y,a[j+i].x,a[j+i].y);
				k++;
		}
	}
	max=b[0];
	for(i=1;i<k-1;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	printf("%.4lf",max);
}
double di(double x1,double y1,double x2,double y2)
{
	return(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}


