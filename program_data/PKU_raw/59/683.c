
int main()
{
	int n, count = 0;
	char a[110][110];
	cin>>n;
	cin.get();
	for(int i = 0; i<n; i++)
		cin.getline(a[i],n+1);
	cin>>count;
/*
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
			cout<<a[i][j];
		cout<<endl;
	}
*/
	while(count>1)
	{
		count--;
		for(int i = 0; i<n; i++)
			for(int j = 0; j<n; j++)
				if(a[i][j]=='@')
				{
					if((i-1)>=0 && a[i-1][j] =='.'  ) 
						a[i-1][j]='$';
					if((i+1)<n && a[i+1][j] =='.' ) 
						a[i+1][j]='$';
					if((j+1)<n && a[i][j+1] =='.') 
						a[i][j+1]='$';
					if((j-1)>=0 && a[i][j-1] =='.') 
						a[i][j-1]='$';
				}

				for(int i = 0; i<n; i++)
				{
					for(int j = 0; j<n; j++)
						if(a[i][j]=='$')
							a[i][j]='@';
				}

				//for(int i = 0; i<n; i++)
				//{
				//	for(int j = 0; j<n; j++)
				//		
				//		cout<<a[i][j];
				//	cout<<endl;
				//}
				//cout<<endl;
	}

	count = 0;

	for(int i = 0; i<n; i++)
		for(int j = 0; j<n; j++)

			if(a[i][j]=='@')
			{
				count++;
			}
			cout<<count;

			return 0;

}