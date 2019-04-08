/*1200012866 ???*/
int main(){
	int n,m;
	char p[110][110]={'\0'};
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>p[i][j];
	cin>>m;
	for(int z=0;z<m-1;z++){
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(p[i][j]=='@'){//????
					if(p[i+1][j]=='.')//?????-1???????
						p[i+1][j]='$';
					if(p[i][j+1]=='.')
						p[i][j+1]='$';
					if(i&&p[i-1][j]=='.')
						p[i-1][j]='$';
					if(j&&p[i][j-1]=='.')
						p[i][j-1]='$';
				}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(p[i][j]=='$')
					p[i][j]='@';
	}
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(p[i][j]=='@')//???????
				count++;
	cout<<count<<endl;

	return 0;
}