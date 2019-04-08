int a[300];
int main(){
	while(1){
		int n,m;
		cin>>n>>m;
		if((n==0)&&(m==0))return 0;
		m--;
		for(int i=0;i<n;i++)a[i]=i+1;
		int t=0;
		for(int i=0;i<n-1;i++){
			t+=m;
			t%=n-i;
			memcpy(&a[t],&a[t+1],sizeof(int)*(n-i-t));
		}
		cout<<a[0]<<endl;
	}
}
