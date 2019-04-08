struct point
{
	double x;
	double y;
};
double dis(struct point a,struct point b)
{
	return((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
void main()
{
	int i,j,n;
	double max;
	struct point p[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&p[i].x,&p[i].y);
	}
	max=dis(p[0],p[1]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(dis(p[i],p[j])>max)
				max=dis(p[i],p[j]);
		}
	}
	printf("%.4f",sqrt(max));
}