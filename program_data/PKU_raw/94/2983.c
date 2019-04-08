int main()
{
	int n,x,y=0;
	int a[501],b[501];
	cin>>n;
	for(x=0;x<n;x++){
		cin>>a[x];
	}
	for(x=0;x<n;x++)
	{
		if(a[x]%2!=0){
			b[y]=a[x];
			y++;
		}

	}
	sort(b,b+y);
	cout<<b[0];
	for(x=1;x<y;x++)
		cout<<','<<b[x];
	return 0;
}
