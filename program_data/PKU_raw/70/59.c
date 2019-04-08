
int main()
{
	struct {
		double x,y;
	} a[PI];

	int i,j,num;
	double max,tmp1,tmp2;

	scanf("%d",&num);
	max=0;
	for (i=0;i<num;i++)
	{
		scanf("%lf" "%lf",&a[i].x,&a[i].y);
	}

	for (i=0;i<num;i++)
	{
		for (j=i+1;j<num;j++)
		{
			double ax,ay;
			ax=a[i].x-a[j].x;
			ay=a[i].y-a[j].y;
			tmp1=pow(ax,2)+pow(ay,2);
			tmp2=sqrt(tmp1);
			if (tmp2>max)
			{
				max=(float)tmp2;
			}
		}
	}
	printf("%.4f",max);	
	return 0;
}