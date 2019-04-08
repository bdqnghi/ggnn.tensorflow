int main()
{
	const int max=110;
	int n;
	cin>>n;
	char a[max][max],b[max][max];
	int i,j;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			b[i][j]='0';
		}
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	
	int m;
	cin>>m;
	m--;
	while(m--){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				b[i][j]=a[i][j];
			}
		}

		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(b[i][j]=='.'&&(b[i-1][j]=='@'||b[i+1][j]=='@'||b[i][j-1]=='@'||b[i][j+1]=='@')){
					a[i][j]='@';
				}
			}
		}

	}

	int sum=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]=='@'){
				sum++;
			}
		}
	}
	
	cout<<sum<<endl;

	return 0;
}

