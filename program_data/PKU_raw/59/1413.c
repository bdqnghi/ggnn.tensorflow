
int main()
{
	int n;
	char a[100][100][100];        
	cin>>n;
	for(int i=0;i<n;i++)        
		for(int j=0;j<n;j++)
			cin>>a[0][i][j];
	int m;
	cin>>m;                   
	for(int d=1;d<m;d++)              
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				a[d][i][j]=a[0][i][j];
	for(int d=1;d<m;d++)        
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(a[d-1][i][j]=='@')     
				{
					if(i+1<=n)                     
						if(a[d-1][i+1][j]!='#')
							a[d][i+1][j]='@';
					if(i-1>=0)                       
						if(a[d-1][i-1][j]!='#')
							a[d][i-1][j]='@';
					if(j+1<=n)                         
						if(a[d-1][i][j+1]!='#')
							a[d][i][j+1]='@';
					if(j-1>=0)                     
						if(a[d-1][i][j-1]!='#')
							a[d][i][j-1]='@';
				}
			}
	int p=0;                      
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[m-1][i][j]=='@')
				p+=1;
	cout<<p<<endl;
	return 0;
}