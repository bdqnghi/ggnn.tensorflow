int a[105][105];
int main()
{
	int m,n;
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	int inow=1,jnow=1;
	int f=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	while(1){
		cout<<a[inow][jnow]<<endl;
		a[inow][jnow]=0;
		if(a[inow+dx[f]][jnow+dy[f]]>0){
			inow=inow+dx[f];
			jnow=jnow+dy[f];
		}
		else{
			f=(f+1)%4;
			if(a[inow+dx[f]][jnow+dy[f]]==0)
				break;
			else{
				inow=inow+dx[f];
				jnow=jnow+dy[f];
			}		
		}	
	}
	return 0;		
}