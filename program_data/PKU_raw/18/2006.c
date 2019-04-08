int mx[200][200];
int nn,n,ans;
int main(){
	cin>>nn;
	for(int q=1;q<=nn;q++){
		ans=0;
		n=nn;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>mx[i][j];
			}
		}
		for(;n>=2;n--){
			int smin;
			for(int i=1;i<=n;i++){
				smin=mx[i][1];
				for(int j=1;j<=n;j++)smin=smin<mx[i][j]?smin:mx[i][j];
				for(int j=1;j<=n;j++)mx[i][j]-=smin;
			}
			for(int i=1;i<=n;i++){
				smin=mx[1][i];
				for(int j=1;j<=n;j++)smin=smin<mx[j][i]?smin:mx[j][i];
				for(int j=1;j<=n;j++)mx[j][i]-=smin;
			}
			ans+=mx[2][2];
			for(int i=1;i<=n;i++){
				for(int j=2;j<n;j++)mx[i][j]=mx[i][j+1];
			}
			for(int i=1;i<=n;i++){
				for(int j=2;j<n;j++)mx[j][i]=mx[j+1][i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}