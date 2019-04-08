
int main() {
	int n=0;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i=i+1)
		cin>>a[n+1-i];
	cout<<a[1];
	for(int j=2;j<=n;j=j+1)
		cout<<" "<<a[j];
	return 0;
}
