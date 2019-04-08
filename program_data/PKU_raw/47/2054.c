/*??? 1200012866
2012.9.28
????*/
int main()
{
	int n;
	cin>>n;
	int a[100],r;
	float n2;
	if(n%2==0)
		n2=n/2;
	else
		n2=(n-1)/2;
	for(int j=0;j<n;j++) cin>>a[j];
	for(int i=0;i<n2;i++)
	{
		r=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=r;
	}
	for(int j=0;j<n-1;j++) cout<<a[j]<<" ";
	cout<<a[n-1];

return 0;
}