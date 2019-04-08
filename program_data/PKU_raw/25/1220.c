int main()
{
	int n,p;
	cin >> n;
	if (n>0)
	{
	p=ceil(log10(2)*n);
	char a[p];
	for (int i=0;i<p;i++)
	{
		a[i]='0';
	}
	a[p-1]='1';
	for (int i=1;i<=n;i++)
	{
		for (int j=0;j<p;j++)
		{
			if (a[j]<'5')
			a[j]=(a[j]-'0')*2+'0';
			else if (a[j]>='5')
			{
			a[j]=(a[j]-'0')*2-10+'0';
				a[j-1]++;
			}
		}
	}
	for (int i=0;i<p;i++)
	{
	cout << a[i];
	}
	cout << endl;
	}
	if (n==0)
	cout << 1 << endl;
	return 0;
}
