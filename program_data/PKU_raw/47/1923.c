void nixu(int a[],int n)
{
	for(int i=n-1;i>0;i--)
	{
		cout<<a[i]<<" ";	
	}	
	cout<<a[0]; 
}
int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin.get();
	}
	nixu(a,n);
	return 0;	
}
