struct POINT {
	int x;
	int y;
	int z;
};
struct DIST {
	int a; 
	int b;
	double dis;
};
int main()
{
	int n,i,j,k,t;
	double td;
	struct POINT point[20];
	struct DIST dists[200];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&point[i].x,&point[i].y,&point[i].z);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dists[k].a=i;
			dists[k].b=j;
			dists[k].dis=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+
				(point[i].y-point[j].y)*(point[i].y-point[j].y)+(point[i].z-point[j].z)*(point[i].z-point[j].z));
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=k-1;j>i;j--)
		{
			if(dists[j].dis>dists[j-1].dis)
			{
				t=dists[j].a;
				dists[j].a=dists[j-1].a;
				dists[j-1].a=t;
				t=dists[j].b;
				dists[j].b=dists[j-1].b;
				dists[j-1].b=t;
				td=dists[j].dis;
				dists[j].dis=dists[j-1].dis;
				dists[j-1].dis=td;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",
			point[dists[i].a].x,point[dists[i].a].y,point[dists[i].a].z,
			point[dists[i].b].x,point[dists[i].b].y,point[dists[i].b].z,
			dists[i].dis);
	}
	return 0;
}