struct pl
{
	float s[3];
};
struct pl p[10];
struct place
{
	struct pl y;
	struct pl x;
	float p;
};
struct place q[45];
struct place qx;
int main()
{
	int n,m,i,j,k=0,l,r,v;
	scanf("%d",&n);
	m=n*(n-1)/2;
	for(i=0;i<=n-1;i++)
	{
		scanf("%f %f %f",&p[i].s[0],&p[i].s[1],&p[i].s[2]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			q[k].y=p[i];
			q[k].x=p[j];
			q[k].p=sqrt( (p[i].s[0]-p[j].s[0])*(p[i].s[0]-p[j].s[0])+(p[i].s[1]-p[j].s[1])*(p[i].s[1]-p[j].s[1])+(p[i].s[2]-p[j].s[2])*(p[i].s[2]-p[j].s[2]) );
			k++;
		}
	}
	for(l=0;l<=m-1;l++)
	{
		for(r=0;r<=m-1-l;r++)
		{
			if(q[r].p<q[r+1].p)
			{
				qx=q[r];
				q[r]=q[r+1];
				q[r+1]=qx;
			}
		}
	}
	for(v=0;v<=m-1;v++)
	{
		printf("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n",q[v].y.s[0],q[v].y.s[1],q[v].y.s[2],q[v].x.s[0],q[v].x.s[1],q[v].x.s[2],q[v].p);
	}
}