struct point
{
	int x[2];
	int y[2];
	int z[2];
	float s;
}p[100],q;
float distant (int x1,int y1, int z1,int x2,int y2,int z2)
{
	float m,e;
	e=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2);
	m=sqrt(e);
	return (m);
}

int main ()
{
	int n,x[11]={0},y[11]={0},z[11]={0},i,j=0,s[100]={0},k,t=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		p[i].x[0]=x[j];
		p[i].y[0]=y[j];
		p[i].z[0]=z[j];
		p[i].x[1]=x[j+t];
		p[i].y[1]=y[j+t];
		p[i].z[1]=z[j+t];
		t++;
		if(j+t>n-1)
		{
			j++;
			t=1;
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
			p[i].s=distant(p[i].x[0],p[i].y[0],p[i].z[0],p[i].x[1],p[i].y[1],p[i].z[1]);
	}
	for(k=1;k<=n*(n-1)/2;k++)
	{
	for(i=0;i<n*(n-1)/2;i++)
	{
			if(p[i].s<p[i+1].s)
			{
				q=p[i];
				p[i]=p[i+1];
				p[i+1]=q;
			}
	}
	}
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2f",p[0].x[0],p[0].y[0],p[0].z[0],p[0].x[1],p[0].y[1],p[0].z[1],p[0].s);
	for(i=1;i<n*(n-1)/2;i++)
		printf("\n(%d,%d,%d)-(%d,%d,%d)=%.2f",p[i].x[0],p[i].y[0],p[i].z[0],p[i].x[1],p[i].y[1],p[i].z[1],p[i].s);
	return 0;
}
