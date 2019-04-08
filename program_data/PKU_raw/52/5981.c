int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)b[i]=a[i];
	for(int k=0;k<n;k++){
		if(n-m+k<=n-1)a[k]=b[n-m+k];
		else a[k]=b[k-m];
	}
	for(int i=0;i<n;i++){
		if(i==0)cout<<a[i];
		else cout<<" "<<a[i];
	}
	return 0;
}