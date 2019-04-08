struct point
{
    double x;
	double y;
	double z;
};

struct points
{
	double x1;
	double y1;
	double z1;
	double x2;
	double y2;
	double z2;
	double len;
};

double length(struct point a,struct point b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}

void main()
{
	int m,n,i,j,k;
	struct point p[11];
	struct points ps[101];
	struct points pst;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf%lf",&p[i].x,&p[i].y,&p[i].z);
    
	k=0;
	for(i=0;i<n;i++)//p1
	{
		for(j=i+1;j<n;j++)//p2
		{
			if(i==j)
				continue;
            ps[k].x1=p[i].x;
			ps[k].y1=p[i].y;
			ps[k].z1=p[i].z;
			ps[k].x2=p[j].x;
			ps[k].y2=p[j].y;
			ps[k].z2=p[j].z;
            ps[k].len=length(p[i],p[j]);
			k++;
		}
	}
    
    m=n*(n-1)/2;
    for(i=1;i<m;i++)
	{
		for(j=0;j<m-i;j++)
			if(ps[j].len<ps[j+1].len)
			{
                pst=ps[j];
				ps[j]=ps[j+1];
				ps[j+1]=pst;
			}
	}
    
    for(i=0;i<m;i++)
        printf("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n",ps[i].x1,ps[i].y1,ps[i].z1,ps[i].x2,ps[i].y2,ps[i].z2,ps[i].len);
	
}