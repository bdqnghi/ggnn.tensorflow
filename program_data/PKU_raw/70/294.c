int main ()
{
	int n;
	scanf("%d",&n);
	struct point
	{
		double x,y;
	};
	point *pp;
	pp=(struct point *)malloc(sizeof(point)*n);
	int i;
	for(i=0;i<n;i++)
	{
		double tmp1,tmp2;
		scanf("%lf%lf",&tmp1,&tmp2);
		(pp+i)->x=tmp1;
        (pp+i)->y=tmp2;
	}
	double dis=0;
	for(i=0;i<n;i++)
	{
		int j;
		for(j=i+1;j<n;j++)
		{
			double tmpdis;
			double deltax,deltay;
			deltax=((pp+i)->x)-((pp+j)->x);
			deltay=((pp+i)->y)-((pp+j)->y);
			tmpdis=sqrt(deltax*deltax+deltay*deltay);
			if(tmpdis>dis)
				dis=tmpdis;
		}
	}
	printf("%.4lf",dis);
	free(pp);
	return 0;
}

