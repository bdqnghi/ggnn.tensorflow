int main()
{
	int b,c,d,h,i,j,k,l,m,n,o,s;
	struct{
		int x,y,z;
	}point[10];
	struct{
		struct{
			int p1,p2,p3;
		}p[50];
		struct{
			int q1,q2,q3;
		}q[50];
		double r;
	}dis[50];
	double g;
	scanf("%d",&n);
	for(int a=0;a<n;a++)
	{
		scanf("%d%d%d",&(point[a].x),&(point[a].y),&(point[a].z));
	}
	s=n*(n-1)/2;
	o=0;
	for(c=0;c<n-1;c++)
	{
			d=c+1;
			for(b=o;b<s;b++)
			{
				dis[b].r=sqrt((point[c].x-point[d].x)*(point[c].x-point[d].x)+(point[c].y-point[d].y)*(point[c].y-point[d].y)+(point[c].z-point[d].z)*(point[c].z-point[d].z));
				dis[b].p[b].p1=point[c].x;
				dis[b].p[b].p2=point[c].y;
				dis[b].p[b].p3=point[c].z;
				dis[b].q[b].q1=point[d].x;
				dis[b].q[b].q2=point[d].y;
				dis[b].q[b].q3=point[d].z;
				d++;
				o++;
				if(d<n)
					continue;
				else
					break;				
			}
	}
	for(int e=1;e<=s;e++)
	{
		for(int f=0;f<s-e;f++)
		{
			if(dis[f].r<dis[f+1].r)
			{
				g=dis[f+1].r;
				dis[f+1].r=dis[f].r;
				dis[f].r=g;
				h=dis[f+1].p[f+1].p1;
				dis[f+1].p[f+1].p1=dis[f].p[f].p1;
				dis[f].p[f].p1=h;
				i=dis[f+1].p[f+1].p2;
				dis[f+1].p[f+1].p2=dis[f].p[f].p2;
				dis[f].p[f].p2=i;
				j=dis[f+1].p[f+1].p3;
				dis[f+1].p[f+1].p3=dis[f].p[f].p3;
				dis[f].p[f].p3=j;
				k=dis[f+1].q[f+1].q1;
				dis[f+1].q[f+1].q1=dis[f].q[f].q1;
				dis[f].q[f].q1=k;
				l=dis[f+1].q[f+1].q2;
				dis[f+1].q[f+1].q2=dis[f].q[f].q2;
				dis[f].q[f].q2=l;
				m=dis[f+1].q[f+1].q3;
				dis[f+1].q[f+1].q3=dis[f].q[f].q3;
				dis[f].q[f].q3=m;
			}
		}
	}
	for(b=0;b<s;b++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",dis[b].p[b].p1,dis[b].p[b].p2,dis[b].p[b].p3,dis[b].q[b].q1,dis[b].q[b].q2,dis[b].q[b].q3,dis[b].r);
	}
	return 0;
}