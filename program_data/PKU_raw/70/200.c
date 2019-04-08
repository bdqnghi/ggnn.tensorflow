int main()
{
	struct point
	{
		double x;
		double y;
	}p[50];
	double dis[100],fdis=0;
	int m=0,n=0,a,b,c,i;
	do{
		dis[n]=0;
		n++;
	}while(n<100);
	scanf("%d",&n);
	do{
		scanf("%lf%lf",&p[m].x,&p[m].y);
		m++;
	}while(m<n);
	a=0;
	b=0;
	c=0;
	do{
		b=0;
		do{
			dis[c]=sqrt((p[a].x-p[b].x)*(p[a].x-p[b].x)+(p[a].y-p[b].y)*(p[a].y-p[b].y));
			b++;
			c++;
		}while(b<n);
		a++;
	}while(a<n);
	i=n*n+1;
	m=0;
	do{
		if(dis[m]>fdis)fdis=dis[m];
			m++;
		}while(m<i);
	printf("%.4lf\n",fdis);
	return 0;
}