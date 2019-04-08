
int main()
{
	int n,a[500],min=100000,max=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		sum+=a[i];
	}
	if(sum-min*n<max*n-sum) cout<<max;
	else if(sum-min*n>max*n-sum) cout<<min;
	else cout<<min<<','<<max;
	return 0;
}
