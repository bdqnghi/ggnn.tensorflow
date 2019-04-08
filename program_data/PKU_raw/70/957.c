int main()
{
	int n,i,j;
	cin>>n;
	double num[100][2];
	for(i=1;i<=n;i++)
	{
		cin>>num[i][0]>>num[i][1];
	}
	double Mdis=0.0,dis;
	for(i=1;i<=n-1;i++){
		for(j=i+1;j<=n;j++){
			dis=sqrt(pow(num[i][0]-num[j][0],2)+pow(num[i][1]-num[j][1],2));
			if(Mdis<dis)
			{
				Mdis=dis;
			}
			else
				continue;
		}
	}
	cout<<Mdis<<endl;
	return 0;
}