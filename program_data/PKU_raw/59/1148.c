char a[110][110];
int main()
{
	int n,m,sum=0;
	int disx[4]={1,0,-1,0};
	int disy[4]={0,-1,0,1};
	cin>>n;
	 for( int i=1;i<=n;i++)
		 for (int j=1;j<=n;j++)
			 cin>>a[i][j];
	 cin>>m;
	 for( int q=1;q<m;q++)
	 {
		 for( int i=0;i<=n;i++)
			 for(int j=0;j<=n;j++)
				 if(a[i][j]=='@')
				      for( int i_=0;i_<4;i_++)
					   if(a[i+disx[i_]][j+disy[i_]]=='.')
							  a[i+disx[i_]][j+disy[i_]]='&';
		  for( int i=0;i<=n;i++)
			 for(int j=0;j<=n;j++)
				 if(a[i][j]=='&')
					 a[i][j]='@';
	 }
	 for(int i=0;i<=n;i++)
		 for( int j=0;j<=n;j++)
			 if(a[i][j]=='@')
				 sum++;
	 cout<<sum<<endl;
    
	return 0;

}