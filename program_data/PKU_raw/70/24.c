void main()
{
	int n,i,j;	
	double x,y,s,dis=0;
	scanf("%d",&n);
	if(n>=2)
	{
		struct point 
		{ 
			double x, y;
		} points[1000];
		for (i=0;i<n-1;i++)
		{
			scanf("%lf %lf",&x,&y); 
			points[i].x = x; 
			points[i].y = y; 
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				s=sqrt((points[j].y-points[i].y)*(points[j].y-points[i].y)+(points[j].x-points[i].x)*(points[j].x-points[i].x));
				if(s>=dis)
				{
					dis=s;
				}
			}
		}
		printf("%.4lf",dis);
	}
}



