
int main(){
	int n,f[21]={1,1};
	cin>>n;
	for (int j=2;j<20;j++)
		f[j]=f[j-1]+f[j-2];
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		cout<<f[x-1]<<endl;
	}
	return 0;
}