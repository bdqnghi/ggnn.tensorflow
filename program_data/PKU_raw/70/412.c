
void main()
{
	struct point
	{
		double x;
		double y;
	}pot[10];
	double max = 0,temp;
	int i,j,total;

	scanf("%d",&total);
	for(i = 0;i<total;i++)
		scanf("%lf %lf",&pot[i].x,&pot[i].y);

	for(i = 0;i<total-1;i++)
	{
		for(j = i+1;j<total;j++)
		{
			if(((temp = distance(i,j))-max)>1e-6)
				max = temp;
		}
	}
	printf("%.4lf\n",max);
}