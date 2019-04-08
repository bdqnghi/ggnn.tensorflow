int main()
{
	struct 
	{
		double x;
		double y;
		double z;	
	}point[15];
	struct stru
	{
		int p,q;
		double distance;
	}dis[50],temp;
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>point[i].x>>point[i].y>>point[i].z;
	int k=0;
	for(i=0;i<n-1;i++)
	   for(j=i+1;j<n;j++)
	   {
			dis[k].p=i;dis[k].q=j;
			double a,b,c;
			a=(point[i].x-point[j].x)*(point[i].x-point[j].x);
			b=(point[i].y-point[j].y)*(point[i].y-point[j].y);
			c=(point[i].z-point[j].z)*(point[i].z-point[j].z);
			dis[k].distance=sqrt(a+b+c);
			k=k+1;
	   }
	for(i=1;i<=k;i++)
	    for(j=0;j<k-i;j++)
	    {
			if(dis[j].distance<dis[j+1].distance)
			{
			    temp=dis[j];dis[j]=dis[j+1];dis[j+1]=temp;
			}
		}
	for(i=0;i<=k-1;i++)
	{
	    cout<<'('<<point[dis[i].p].x<<','<<point[dis[i].p].y<<','<<point[dis[i].p].z<<')';
	    cout<<"-("<<point[dis[i].q].x<<','<<point[dis[i].q].y<<','<<point[dis[i].q].z<<")=";
		printf("%.2f\n",dis[i].distance);
	}
	return 0;
}