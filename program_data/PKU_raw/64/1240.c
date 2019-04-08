
struct Point
{
	int x1;
	int x2;
	int x3;
}point1,point2,p[11];

struct Dis
{
	struct Point point1;
	struct Point point2;
	float d;
}dis[46],tmp;

int main()
{
	int n,i,j,m,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&p[i].x1,&p[i].x2,&p[i].x3);
	}


	for(k=0,m=n-1;m>0;m--)
	{
		
		for(i=1;i<=m;i++)
		{
			dis[k+i].point1=p[n-m];
			dis[k+i].point2=p[n-m+i];
			dis[k+i].d=sqrt((dis[k+i].point1.x1-dis[k+i].point2.x1)*(dis[k+i].point1.x1-dis[k+i].point2.x1)+(dis[k+i].point1.x2-dis[k+i].point2.x2)*(dis[k+i].point1.x2-dis[k+i].point2.x2)+(dis[k+i].point1.x3-dis[k+i].point2.x3)*(dis[k+i].point1.x3-dis[k+i].point2.x3));
		}
		k=k+m;
	}

	for(i=1;i<(n*(n-1)/2);i++)
	{
		for(j=1;j<=(n*(n-1)/2-i);j++)
		{
			if(dis[j].d<dis[j+1].d)
			{
				tmp=dis[j];
				dis[j]=dis[j+1];
				dis[j+1]=tmp;
			}
		}
	}

	for(i=1;i<=n*(n-1)/2;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",dis[i].point1.x1,dis[i].point1.x2,dis[i].point1.x3,dis[i].point2.x1,dis[i].point2.x2,dis[i].point2.x3,dis[i].d);
	}
	return 0;
}


