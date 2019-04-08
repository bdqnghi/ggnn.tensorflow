struct distance
{
	int p1[3];
	int p2[3];
	float dis;
}d[50],t;
int main()
{
	int n;
	cin>>n;
	int a[10][3];
	for(int i=0;i<n;i++)
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	int p=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			{d[p].p1[0]=a[i][0];
	         d[p].p1[1]=a[i][1];
			 d[p].p1[2]=a[i][2];
			 d[p].p2[0]=a[j][0];
			 d[p].p2[1]=a[j][1];
			 d[p].p2[2]=a[j][2];
			 d[p].dis=sqrt(pow((double)(d[p].p1[0]-d[p].p2[0]),2)+pow((double)(d[p].p1[1]-d[p].p2[1]),2)+pow((double)(d[p].p1[2]-d[p].p2[2]),2));
			 p++;}
	for(int i=0;i<n*(n-1)/2;i++)
		for(int j=n*(n-1)/2-1;j>i;j--)
		{
			if(d[j].dis>d[j-1].dis){t=d[j];d[j]=d[j-1];d[j-1]=t;}
		}
	for(int i=0;i<n*(n-1)/2;i++)
		{printf("(%d,%d,%d)-(%d,%d,%d)=%.2f",d[i].p1[0],d[i].p1[1],d[i].p1[2],d[i].p2[0],d[i].p2[1],d[i].p2[2],d[i].dis);
	cout<<endl;}
	return 0;
}