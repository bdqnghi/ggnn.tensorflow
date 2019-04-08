



int main()
{

	int hill[25][25]={0};
	int m=0, n=0;
	int average=0;

	cin>>m>>n;

	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>hill[i][j];
		
		}	
	}
		








	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			
				if(hill[i][j]>=hill[i-1][j]	&&hill[i][j]>=hill[i+1][j] && hill[i][j]>=hill[i][j-1] && hill[i][j]>=hill[i][j+1])
					cout<< i-1<<" "<<j-1<<endl;
		
		
		}

	}


return 0;
}