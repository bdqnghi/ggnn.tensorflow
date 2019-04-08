int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int t=0;t<=n-1;t++){
		cin>>a[t];
	}
	cin>>k;
	int number=0,b=0;
	for(int i=0;i<=n-1;i++){
		if(a[i]!=k){number=number+1;
		}}
		for(int i=0;i<=n-1;i++){
		if(a[i]!=k){b=b+1;cout<<a[i];
		if(b<number)cout<<" ";}
			}return 0;

}