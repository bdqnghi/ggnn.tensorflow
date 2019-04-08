int main ()
{
	int a[100]={0};
	int n;
	cin>>n;
	int *p=a;
	for (int i=0;i<n;i++)
		cin>>*p++;
	for (int i=0;i<n;i++)
	{
		if (i!=0)
			cout<<" ";
		cout<<*--p;
	}
	
	return 0;
}