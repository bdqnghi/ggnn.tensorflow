int main()
{
	int n,i;
	int a[1000];
	memset(a,0,sizeof(a));
	a[0]=1;
	cin >> n;
	for(i=0;i<n;i++)
	{
		int j;
		for(j=0;j<n;j++)
			a[j]=a[j]*2;
		for(j=0;j<n;j++)
			if(a[j]>9)
			{
				a[j]=a[j]%10;
				a[j+1]++;
			}
	}
		for(i=n;i>=0;i--)
			if(a[i]!=0)
				break;
		int s;
		for(s=i;s>=0;s--)
			cout << a[s];
		cout << endl;
	return 0;
}