int main()
{
	int n=0,i=0,a[100];
	cin >>n;
	for(i=0;i<n;i++)
		cin >>a[i];
	for(i=0;i<n;i++)
	{
		if(i==0)
			cout <<a[n-1-i];
		else
			cout <<" " <<a[n-1-i];
	}
	cout <<endl;
	return 0;
}
