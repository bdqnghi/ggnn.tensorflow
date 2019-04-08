double juli(double x1,double y1,double x2,double y2)
{
	double y;
	y=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	return(y);
}
int main()
{
	int i,j,n,sum=0;
	scanf("%d",&n);
	double x[10000],y[10000],dis[10000];
	for(i=0;i<n;i++)
		scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dis[sum]=juli(x[i],y[i],x[j],y[j]);
			sum++;
		}
	}
	double t=dis[0];
	for(i=0;i<sum;i++)
		if(dis[i]>t)
			t=dis[i];
	printf("%.4lf\n",t);
	return 0;
} 