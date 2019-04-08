int main(){
	int n;
	int w[100][100];
	cin>>n;
	for(int nn=0;nn<n;nn++){
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>w[i][j];
		int s=0;
		for(int t=0;t<n-1;t++){
			for(int i=0;i<n;i++)
				if((!i)||(i-t>0)){
					int m=w[i][0];
					for(int j=t+1;j<n;j++)m=min(m,w[i][j]);
					w[i][0]-=m;
					for(int j=t+1;j<n;j++)w[i][j]-=m;
				}
			for(int j=0;j<n;j++)
				if((!j)||(j-t>0)){
					int m=w[0][j];
					for(int i=t+1;i<n;i++)m=min(m,w[i][j]);
					w[0][j]-=m;
					for(int i=t+1;i<n;i++)w[i][j]-=m;
				}
			s+=w[t+1][t+1];
		}
		cout<<s<<endl;
	}
	return 0;
}