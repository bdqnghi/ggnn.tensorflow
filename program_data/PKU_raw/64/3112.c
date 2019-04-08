struct point
{
	int x;
	int y;
	int z;
}po[10];
struct distance
{
	double dist;
	int x1;
	int y1;
	int z1;
	int x2;
	int y2;
	int z2;
};
int main()
{
	int n,i,j,k=0;
	struct distance dis[50],temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>po[i].x>>po[i].y>>po[i].z;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			dis[k].dist=sqrt((po[i].x-po[j].x)*(po[i].x-po[j].x)+(po[i].y-po[j].y)*(po[i].y-po[j].y)+(po[i].z-po[j].z)*(po[i].z-po[j].z));
			dis[k].x1=po[i].x;
			dis[k].y1=po[i].y;
			dis[k].z1=po[i].z;
			dis[k].x2=po[j].x;
			dis[k].y2=po[j].y;
			dis[k].z2=po[j].z;
			k++;
		}
	for(i=0;i<n*(n-1)/2-1;i++)
	{
	    for(j=0;j<n*(n-1)/2-i-1;j++)
	    {
	        if(dis[j].dist<dis[j+1].dist)
	        {
	            temp=dis[j+1];
	            dis[j+1]=dis[j];
	            dis[j]=temp;
	        }
	    }
    }
	for(i=0;i<n*(n-1)/2;i++)
	{
		cout<<"("<<dis[i].x1<<","<<dis[i].y1<<","<<dis[i].z1<<")"<<"-"<<"("<<dis[i].x2<<","<<dis[i].y2<<","<<dis[i].z2<<")"<<"="<<fixed<<setprecision(2)<<dis[i].dist<<endl;
	}
	return 0;
}