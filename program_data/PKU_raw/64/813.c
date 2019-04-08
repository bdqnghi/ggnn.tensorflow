int main()
{
	int n,i,j,k;
	float x[20],y[20],z[20],d[20][20]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f%f%f",&x[i],&y[i],&z[i]);

	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{

			d[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
		}
	}
	double count=0;
hell:;
	double max=0;
	int a,b;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(d[i][j]>max)
			{
				max=d[i][j];
				a=i;b=j;
			}
		}
	}
	printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2lf\n",x[a],y[a],z[a],x[b],y[b],z[b],max);
	d[a][b]=-1;
	count++;
	if(count<(n*(n-1))/2)
	goto hell;
}