int main()
{
	int n,i,j=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]%2==1)j++;
		else a[i]=0;
	}
	sort(a,a+n);
	for(i=n-j;i<n;i++){
		if(i==n-j)cout<<a[i];
		else cout<<","<<a[i];}
	return 0;
}