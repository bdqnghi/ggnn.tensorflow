int main()
{	
	int num;
	double numm[100][2];
	double dis;
	cin>>num;
	double max=0;
	for(int i=0; i<num ; i++ ) cin>>numm[i][0]>>numm[i][1];
	for(int i=0;i<num;i++)
		for(int j=0;j<i;j++)
		{
			dis=sqrt(pow(numm[i][0]-numm[j][0],2)+pow(numm[i][1]-numm[j][1],2));
			if(dis>max) max=dis;
		}

		cout<<setprecision(4)<<fixed<<max;

	return 0;
} 

