struct distance
{
	int sp1x;
	int sp1y;
	int sp1z;
	int sp2x;
	int sp2y;
	int sp2z;
	double dis;
} dis[999999],temp;
int main()
{
	int n,spot[9999][3]={0},t=0;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>spot[i][0]>>spot[i][1]>>spot[i][2];
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
		{
			dis[t].sp1x=spot[i][0];
			dis[t].sp1y=spot[i][1];
			dis[t].sp1z=spot[i][2];
			dis[t].sp2x=spot[j][0];
			dis[t].sp2y=spot[j][1];
			dis[t].sp2z=spot[j][2];
			dis[t].dis=sqrt(pow(spot[i][0]-spot[j][0],2.0) + pow(spot[i][1]-spot[j][1],2.0) + pow(spot[i][2]-spot[j][2],2.0));
			t++;
		}
	for (int i=0;i<=t-2;i++)
		for (int j=0;j<=t-2-i;j++)
			if (dis[j].dis<dis[j+1].dis)
			{
				temp=dis[j];
				dis[j]=dis[j+1];
				dis[j+1]=temp;
			}
	for (int i=0;i<t;i++)
		cout<<"("<<dis[i].sp1x<<","<<dis[i].sp1y<<","<<dis[i].sp1z<<")-("<<dis[i].sp2x<<","<<dis[i].sp2y<<","<<dis[i].sp2z<<")="
		<<fixed<<setprecision(2)<<dis[i].dis<<endl;
	return 0;
}