int main()
{
	int n,i;
	int a[6]={100,50,20,10,5,1},b[6]={0};
	cin>>n;
	for(i=0;i<6;i++)
	{
		b[i]=n/a[i];
		n=n%a[i];
		cout<<b[i]<<endl;
	}
	return 0;
}