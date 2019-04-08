
int main()
{
	int n;
	int i,j;
	double max;
	double a[1000][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i][0],&a[i][1]);
	}
	max=sqrt((a[0][0]-a[1][0]) * (a[0][0]-a[1][0]) + (a[0][1]-a[1][1]) * (a[0][1]-a[1][1]));
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(sqrt((a[i][0]-a[j][0]) * (a[i][0]-a[j][0]) + (a[i][1]-a[j][1]) * (a[i][1]-a[j][1]))>max)
			max=sqrt((a[i][0]-a[j][0]) * (a[i][0]-a[j][0]) + (a[i][1]-a[j][1]) * (a[i][1]-a[j][1]));
		}
	}
	printf("%.4lf\n",max);
	
	return 0;
}
