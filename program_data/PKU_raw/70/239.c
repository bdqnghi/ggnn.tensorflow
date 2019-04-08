int main()
{
	int i,j,n;
	struct point{
		float x,y;
	}p[num];
	double max=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&(p[i].x),&(p[i].y));
		for(j=0;j<i;j++)
		{
			a=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
			if(a>max)
				max=a;
		}
	}
	printf("%.4f",max);
	return 0;
}
		

