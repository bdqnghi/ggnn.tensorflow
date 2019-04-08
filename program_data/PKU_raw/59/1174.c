char a[103][200][200];
int main(){
	int n,m,day=1;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[1][i][j];
	cin>>m;
	while(m>day){
		day++;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++){
				if(a[day-1][i][j]=='#')a[day][i][j]='#';
				else if(a[day-1][i][j]=='@'||i>0&&a[day-1][i-1][j]=='@'||i<n-1&&a[day-1][i+1][j]=='@'||j>0&&a[day-1][i][j-1]=='@'||j<n-1&&a[day-1][i][j+1]=='@')a[day][i][j]='@';
				else a[day][i][j]='.';
			}
	}
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[m][i][j]=='@')count++;
	cout<<count<<endl;
	return 0;
}