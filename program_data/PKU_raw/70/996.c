struct point
{
	double x,y;
}*point;
int main()
{
    int n,i,j;
	double d,dx,dy;
	double maxd=0;
	
	scanf("%d",&n);
	point=(struct point*)malloc(sizeof(struct point) *n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&point[i].x,&point[i].y);
		for(j=0;j<i;j++)
		{
			dx=point[i].x-point[j].x;
			dy=point[i].y-point[j].y;
			d=sqrt(dx*dx+dy*dy);
			if(d>maxd) maxd=d;
		}
	}
	printf("%.4lf\n",maxd);
	free(point);

	return 0;
}
