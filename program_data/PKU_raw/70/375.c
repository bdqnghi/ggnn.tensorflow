struct point
{
	double x;
	double y;
};
double len(struct point m,struct point n)
{
	double l;
	l=sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
	return(l);
}
void main()
{
	struct point p[100];
	int n,i,j;
	double max=0;
	scanf("%d",&n);
	scanf("%lf %lf",&p[0].x,&p[0].y);
	for (i=1;i<=n-1;i++)
	{
		scanf("%lf %lf",&p[i].x,&p[i].y);
		for (j=0;j<=i-1;j++)
		{
			if (max<len(p[i],p[j]))
			{
				max=len(p[i],p[j]);
			}
		}
	}
	printf("%.4lf",max);
}