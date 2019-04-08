/*1200012866 ??? 11.29*/
char a[110][110];
int ganran(int day,int m,int n){
	if(day==m){//???m?
		int count=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(a[i][j]=='@'||a[i][j]=='a')
					count++;
		return count;
	}
	else{
		for(int i=1;i<=n;i++)//??
			for(int j=1;j<=n;j++){
				if(a[i][j]=='@'){
					if(a[i+1][j]=='.')
						a[i+1][j]='a';
					if(a[i-1][j]=='.')
						a[i-1][j]='a';
					if(a[i][j+1]=='.')
						a[i][j+1]='a';
					if(a[i][j-1]=='.')
						a[i][j-1]='a';
				}
			}
		for(int i=1;i<=n;i++)//???????????????????
			for(int j=1;j<=n;j++)
				if(a[i][j]=='a')
					a[i][j]='@';
		return ganran(day+1,m,n);
	}
}
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	cin>>m;
	cout<<ganran(1,m,n)<<endl;

	return 0;
}