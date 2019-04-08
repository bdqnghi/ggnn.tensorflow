struct point{
	int x;
	int y;
	int z;
};
struct diskumi{
	struct point po1;
	struct point po2;
	double dist;
};
int main()
{
	int n;
	int xa[15],ya[15],za[15];
	struct diskumi dis[45];
	int baka;
	double cir;
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d",&xa[i],&ya[i],&za[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dis[k].po1.x=xa[i];
			dis[k].po1.y=ya[i];
			dis[k].po1.z=za[i];
			dis[k].po2.x=xa[j];
			dis[k].po2.y=ya[j];
			dis[k].po2.z=za[j];
			dis[k].dist=sqrt((xa[i]-xa[j])*(xa[i]-xa[j])+(ya[i]-ya[j])*(ya[i]-ya[j])+(za[i]-za[j])*(za[i]-za[j]));
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(dis[j+1].dist>dis[j].dist)
			{
				baka=dis[j].po1.x;
				dis[j].po1.x=dis[j+1].po1.x;
				dis[j+1].po1.x=baka;
				baka=dis[j].po1.y;
				dis[j].po1.y=dis[j+1].po1.y;
				dis[j+1].po1.y=baka;
				baka=dis[j].po1.z;
				dis[j].po1.z=dis[j+1].po1.z;
				dis[j+1].po1.z=baka;

				baka=dis[j].po2.x;
				dis[j].po2.x=dis[j+1].po2.x;
				dis[j+1].po2.x=baka;
				baka=dis[j].po2.y;
				dis[j].po2.y=dis[j+1].po2.y;
				dis[j+1].po2.y=baka;
				baka=dis[j].po2.z;
				dis[j].po2.z=dis[j+1].po2.z;
				dis[j+1].po2.z=baka;

				cir=dis[j].dist;
				dis[j].dist=dis[j+1].dist;
				dis[j+1].dist=cir;
			}
		}
	}
	k--;
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf",dis[0].po1.x,dis[0].po1.y,dis[0].po1.z,dis[0].po2.x,dis[0].po2.y,dis[0].po2.z,dis[0].dist);
	for(i=1;i<=k;i++)
	{
		printf("\n(%d,%d,%d)-(%d,%d,%d)=%.2lf",dis[i].po1.x,dis[i].po1.y,dis[i].po1.z,dis[i].po2.x,dis[i].po2.y,dis[i].po2.z,dis[i].dist);
	}
}