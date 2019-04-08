int main()
{
	int m=1,i=0,n=0,j=0,k=0;
	cin >> m;
	int a[20000]={0};
	cin >> a[0];
	cout << a[0];
	for (i=1;i<m;i++)
	{
		cin >> a[i];
		k=1;
	    for (j=0;j<i;j++)
		{
		if (a[i]==a[j])
		{
			k=0;
			break;
		}
		}
		if (k==1)
		cout << " " << a[i];
	
	}
	return 0;
}