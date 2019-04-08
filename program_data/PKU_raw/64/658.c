struct dis
{
	int from[4];
	int to[4];
	double d;
}dis[6000];               //???????
int main()
{
	int n,p[11][4],i,j,t=0;
	cin>>n;
	for (i=1;i<=n;i++)
	 for (j=1;j<=3;j++)
	  cin>>p[i][j];      //??????????????
	for (i=1;i<=n-1;i++)
	 for (j=i+1;j<=n;j++)
	 {
	   t++;
	   dis[t].from[1]=p[i][1];
	   dis[t].from[2]=p[i][2];
	   dis[t].from[3]=p[i][3];
	   dis[t].to[1]=p[j][1];
	   dis[t].to[2]=p[j][2];
	   dis[t].to[3]=p[j][3];     //??????????
	   dis[t].d=sqrt(pow(p[i][1]-p[j][1],2.0)+pow(p[i][2]-p[j][2],2.0)+pow(p[i][3]-p[j][3],2.0));//??????????????????
	 }
	for (i=1;i<=t-1;i++)
	 for (j=1;j<=t-i;j++)
	 {
		 if (dis[j].d<dis[j+1].d)
		 {
			 dis[0]=dis[j];
			 dis[j]=dis[j+1];
			 dis[j+1]=dis[0];
		 }                  //????????
	 }
	for (i=1;i<=t;i++)
	{
	 cout<<"("<<dis[i].from[1]<<","<<dis[i].from[2]<<","<<dis[i].from[3]<<")"<<"-";
	 cout<<"("<<dis[i].to[1]<<","<<dis[i].to[2]<<","<<dis[i].to[3]<<")"<<"=";
	 cout<<fixed<<setprecision(2)<<dis[i].d<<endl;                    //?????????

	}
	 return 0;
}
