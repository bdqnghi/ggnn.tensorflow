struct point
{
	double x;
	double y;
	double z;
};
struct dianju
{
	double d;
	struct point p1;
	struct point p2;
};
void main()
{

	double julijisuan(struct point p1,struct point p2);
	int n,i,j,k;
	struct point p[m];
	struct dianju D[m*(m-1)/2];
	struct dianju a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&p[i].x,&p[i].y,&p[i].z);
	}
	for(i=0,k=0;i<n-1;i++)
	{
	
		for(j=i;j<n-1;j++,k++)
		{
			D[k].p1=p[i];
			D[k].p2=p[j+1];
			D[k].d=julijisuan(D[k].p1,D[k].p2);
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		for(j=0;j<n*(n-1)/2-1;j++)
		{
			if(D[j].d<D[j+1].d)
			{
				a=D[j];
				D[j]=D[j+1];
				D[j+1]=a;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",D[i].p1.x,D[i].p1.y,D[i].p1.z,D[i].p2.x,D[i].p2.y,D[i].p2.z,D[i].d);
	}

	



}


double julijisuan(struct point p1,struct point p2)
{
	return(sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)+(p1.z-p2.z)*(p1.z-p2.z)));
}