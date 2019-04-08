int main()  
{    
	int a[20],b[10];
	int i,j,n;
	a[0]=1;
	a[1]=1;
	for(i=2;i<=19;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		b[i]=a[j-1];
		cout<<b[i]<<endl;
	}
	
	
	
	return 0;              
}             // ?????

