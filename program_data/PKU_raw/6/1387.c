
int init(){
	//?????
	int k,t,m,n,ans;
	cin>>k;
	while(k){
		k--;
		ans=0;
		cin>>m>>n;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>t;
				if(i==0||i==m-1||j==0||j==n-1)ans+=t;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

int main(){
	init();
	return 0;
}

