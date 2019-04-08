int main(){
	int f[20];
	f[1]=1;
	f[0]=1;
	int n;
	int a[20];
	for(int i=2;i<=19;i++)
		f[i]=f[i-1]+f[i-2];
	cin>>n;
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=0;i<=n-1;i++)
		cout<<f[a[i]-1]<<endl;//????1????

}