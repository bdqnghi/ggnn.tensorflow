int main(int argc,  char* argv[])
{
	int n,i,j;
	double distance=0,d;
	struct point {
		double x,y;
	};
    struct point *p;
	scanf ("%d",&n);
	p=(struct point*)malloc(sizeof(point)*n);
	for (i=0;i<n;i++)
	{
		scanf ("%lf%lf",&p[i].x,&p[i].y);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			d=(p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y);
			if (sqrt(d)>distance) distance=sqrt(d);
		}
	}
	printf("%.4lf\n",distance);
	free(p);
	return 0;
}


