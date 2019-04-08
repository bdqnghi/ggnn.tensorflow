void find(int s[22][22],int x,int y,int m,int n)
{
	if(x==0&&y==0){
		if((s[x][y]>=s[x+1][y])&&(s[x][y]>=s[x][y+1]))
			cout<<x<<' '<<y<<endl;
		return;
	}
	if(x==m&&y==n){
		if((s[x][y]>=s[x-1][y])&&(s[x][y]>=s[x][y-1]))
			cout<<x<<' '<<y<<endl;
		return;
	}
	if(x==m&&y==0){
		if((s[x][y]>=s[x][y+1])&&(s[x][y]>=s[x-1][y]))
			cout<<x<<' '<<y<<endl;
		return;
	}
	if(x==0&&y==n){
		if((s[x][y]>=s[x+1][y])&&(s[x][y]>=s[x][y-1]))
			cout<<x<<' '<<y<<endl;
		return;
	}
	if(x==0){
		if((s[x][y]>=s[x][y+1])&&(s[x][y]>=s[x][y-1])&&(s[x][y]>=s[x+1][y]))
			cout<<x<<' '<<y<<endl;
		return;
	}
	if(y==0){
		if((s[x][y]>=s[x][y+1])&&(s[x][y]>=s[x+1][y])&&(s[x][y]>=s[x-1][y]))
					cout<<x<<' '<<y<<endl;
				return;
	}
	if(x==m){
		if((s[x][y]>=s[x][y+1])&&(s[x][y]>=s[x][y-1])&&(s[x][y]>=s[x-1][y]))
					cout<<x<<' '<<y<<endl;
				return;
	}
	if(y==n){
		if((s[x][y]>=s[x][y-1])&&(s[x][y]>=s[x+1][y])&&(s[x][y]>=s[x-1][y]))
							cout<<x<<' '<<y<<endl;
						return;
	}
	if((s[x][y]>=s[x-1][y])&&(s[x][y]>=s[x+1][y])&&(s[x][y]>=s[x][y-1])&&(s[x][y]>=s[x][y+1]))
		cout<<x<<' '<<y<<endl;
}
int main(){
	int m,n,i,j;
	cin>>m>>n;
	int a[22][22];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			find(a,i,j,m-1,n-1);
	return 0;
}
