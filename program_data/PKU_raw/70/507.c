int main()
{
	int  n, i, j;
    double t, s[1000][1000];
	struct point{
		double x;
		double y;
		
	}place[10000];
    scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%lf %lf", &place[i].x, &place[i].y);
		
	}
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			s[i][j]=sqrt((place[j].x-place[i].x)*(place[j].x-place[i].x)+(place[j].y-place[i].y)*(place[j].y-place[i].y));
			if(s[i][j]>s[0][0])
			{
				t=s[0][0];
				s[0][0]=s[i][j];
				s[i][j]=t;
			}
		}
	}
		
	
	printf("%.4lf\n", s[0][0]);
	return 0;
}