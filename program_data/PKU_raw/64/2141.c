int main()
{
	int n, l = 0;
	struct point
	{
		int x;
		int y;
		int z;
	}a[10];
	struct distance
	{
		int m[3];
		int n[3];
		double dis;
	}temp,b[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].x>>a[i].y>>a[i].z;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			b[l].m[0] = a[i].x;
			b[l].m[1] = a[i].y;
			b[l].m[2] = a[i].z;
			b[l].n[0] = a[j].x;
			b[l].n[1] = a[j].y;
			b[l].n[2] = a[j].z;
			b[l].dis = sqrt( ( a[j].x - a[i].x ) * ( a[j].x - a[i].x ) + ( a[j].y - a[i].y ) * ( a[j].y - a[i].y ) + ( a[j].z - a[i].z ) * ( a[j].z - a[i].z ) );
			l++;
		}
	}
	for(int i=0;i<n*(n-1)/2-1;i++)
	{
		for(int j=0;j<n*(n-1)/2-1;j++)
		{
			if(b[j].dis<b[j+1].dis)
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n*(n-1)/2;i++)
	{
		cout<<"("<<b[i].m[0]<<","<<b[i].m[1]<<","<<b[i].m[2]<<")-("
			<<b[i].n[0]<<","<<b[i].n[1]<<","<<b[i].n[2]<<")="<<fixed<<setprecision(2)<<b[i].dis<<endl;
	}
	return 0;
}
