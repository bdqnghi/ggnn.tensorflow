int main()
{
	int x,y;
	cin>>x>>y;
	int i,j,X[20]={0},Y[20]={0};
	X[0]=x;Y[0]=y;
	for(i=1;i<20;i++)
	{
		X[i]=X[i-1]/2;
		Y[i]=Y[i-1]/2;
	}
	int flag = 0;
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			if(X[i]==Y[j])
			{
			cout<<X[i];
			flag = 1;
			break;}
		}
		if(flag) break;
	}
	return 0;
} 