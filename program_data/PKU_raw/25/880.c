int main()
{
	int a[35]={1};
	int i,j,n,t;
	cin>>n;
	for (i=0; i<n; i++)
	{
		t=0;  //??
		for (j=0; j<35; j++)  //?????
		{
			a[j]=a[j]+a[j]+t;
			t=a[j] / 10;
			a[j]=a[j] % 10;
		}
	}
	for (i=34; a[i]==0; i--);
	for (; i>=0; i--) cout<<a[i];
	cout<<endl;
	return 0;
}
