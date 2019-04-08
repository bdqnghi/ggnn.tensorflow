
int main()
{   
    int n, i, j;
	double m=0, l, M;
	struct point
	{
		double x;
		double y;
	} point[100];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&point[i].x,&point[i].y);

	}
	for(i=1;i<n;i++)
	
	{
		for(j=0;j<i;j++)
		{
          l=(point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y);
		  if(l>m) m=l;
		}
	}
	M=sqrt(m);
	printf("%.4lf\n",M);
	return 0;
}

