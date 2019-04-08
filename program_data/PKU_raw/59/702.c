/*??? 1200012866 11.11*/
int main(){
	int n,count=0,m;
	char a[105][105],b[105][105];
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	cin>>m;
	for(int z=0;z<m-1;z++){//m-1?
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)//??
				if(a[i][j]=='@'){
					if(i>0&&a[i-1][j]!='#')
						b[i-1][j]='@';
					if(j>0&&a[i][j-1]!='#')
						b[i][j-1]='@';
					if(i<n-1&&a[i+1][j]!='#')
						b[i+1][j]='@';
					if(j<n-1&&a[i][j+1]!='#')
						b[i][j+1]='@';
				}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)//????
				a[i][j]=b[i][j];
	}
	for(int i=0;i<n;i++)//??
		for(int j=0;j<n;j++)
			if(a[i][j]=='@')
				count++;
	cout<<count<<endl;

	return 0;
}