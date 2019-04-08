struct District
	{
		int x;
		int y;
		int z;
	}dis[11];//????
struct Distance
	{
		int a;
		int b;
		double c;
	}d[91],temp;//?????????
int main()
{
	int n,k=1;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>dis[i].x>>dis[i].y>>dis[i].z;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			d[k].a=i;
			d[k].b=j;
			d[k].c=sqrt((double)(dis[i].x-dis[j].x)*(dis[i].x-dis[j].x)+(dis[i].y-dis[j].y)*(dis[i].y-dis[j].y)+(dis[i].z-dis[j].z)*(dis[i].z-dis[j].z));
			k++;
		}
	}//?i????j?????
	for(int i=1;i<=k-2;i++)
	{
		for(int j=1;j<=k-i;j++)
		{
			if(d[j].c<d[j+1].c)
			{
			temp=d[j];
			d[j]=d[j+1];
			d[j+1]=temp;
			}
		}
	}//??????
	for(int i=1;i<=k-1;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",dis[d[i].a].x,dis[d[i].a].y,dis[d[i].a].z,dis[d[i].b].x,dis[d[i].b].y,dis[d[i].b].z,d[i].c);
	}//??

	return 0;
}
