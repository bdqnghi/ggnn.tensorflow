int main()
{
	int n,m,sum=0;
	char x,room[N][N],room2[N][N];;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		{
			cin>>room[i][j];
		}
	}
	memcpy(room2,room,N*N);
		cin>>m;
		for(int f=1;f<=m-1;f++){
			for(int i=1;i<=n;i++){
		        for(int j=1;j<=n;j++){
			if(room[i][j]=='@'){
				if(room[i+1][j]=='.')room2[i+1][j]='@';
				if(room[i-1][j]=='.')room2[i-1][j]='@';
				if(room[i][j+1]=='.')room2[i][j+1]='@';
				if(room[i][j-1]=='.')room2[i][j-1]='@';
			        }
				}
			}
			memcpy(room,room2,N*N);
		}
		    for(int i=1;i<=n;i++)
			    for(int j=1;j<=n;j++){
					if(room2[i][j]=='@')sum++;
				}
				cout<<sum<<endl;
				return 0;

}