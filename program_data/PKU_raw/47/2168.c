int main()
{
	int n,i;
	cin>>n;//??n
	int a[n+1];
	int *p=NULL;
	p=&a[0];
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);//????
	}
	cout<<*(p+n-1);//???????
	for(i=n-2;i>=0;i--)
	{
		cout<<' '<<*(p+i);//?????????
	}
	return 0;
}

