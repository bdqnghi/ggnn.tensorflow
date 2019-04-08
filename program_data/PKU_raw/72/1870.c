int m,n,a[20][20];
void gaocheng(int i,int j){
	if(i==0&&j>0&&j<n) {if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]
	&&a[i][j]>=a[i+1][j])  cout<<i<<" "<<j<<endl;
	}
	else if(i==0&&j>0&&j<n) {if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]
	)  cout<<i<<" "<<j<<endl;}
	else if(j==0&&i>0&&i<m) {if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]
	&&a[i][j]>=a[i+1][j])  cout<<i<<" "<<j<<endl;
	}
	else if(j==n&&i>0&&i<m) {if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]
	&&a[i][j]>=a[i+1][j])  cout<<i<<" "<<j<<endl;
	}
	else if(j==0&&i==0) {if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]) cout<<i<<" "<<j<<endl;}
	else if(i==0&&j==n) {if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]) cout<<i<<" "<<j<<endl;}
	else if(i==m&&j==0) {if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]) cout<<i<<" "<<j<<endl;}
	else if(i==m&&j==n) {if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])cout<<i<<" "<<j<<endl;}
	else {if (a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]
	&&a[i][j]>=a[i+1][j])
		cout<<i<<" "<<j<<endl;}
}
int main(){
	int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			gaocheng(i,j);
	
}