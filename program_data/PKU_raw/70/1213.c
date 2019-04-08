struct Point
{
	double x;
	double y;
};

int main(void)
{
	int n;
	double distant,max=0;
	
	struct Point point[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf",&point[i].x,&point[i].y);
		for(int j=0;j<i;j++)
		{
			distant=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y));
			if(distant>max)
			{
				max=distant;
			}
		}
	}

	printf("%.4lf",max);
	return 0;
}
