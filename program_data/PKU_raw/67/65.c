int main()
{
	int n;
	cin>>n;
	double sz[100][2];

	int i;
	
	for( i=0;i<n;i++)
	{
		cin>>sz[i][0]>>sz[i][1];
		if(i>=1)
		{
			if(sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]>0.05)
				cout<<"better"<<endl;
			else if(sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]<-0.05)
				cout<<"worse"<<endl;
			else
				cout<<"same"<<endl;
		}
	}

			

		
	
	
	
	return 0;
}
