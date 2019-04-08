int main()
{
	int a[100]={0};
	int n,j,i,p;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	if(n==1)
	cout<<a[0]; 
        else
        { 
	cout<<a[n-1];	
        for(i=n-2;i>=0;i--)
	cout<<' '<<a[i];
	}
		return 0;
}