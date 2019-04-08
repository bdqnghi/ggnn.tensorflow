
int main()
{
	int x,y;
	cin>>x>>y;
	int a[12]={0},i,j,b[12]={0},point;
	a[0]=x;
	b[0]=y;
	for (i=1;i<12;i++)
	{
		a[i]=a[i-1]/2;
		b[i]=b[i-1]/2;
	}
	for (i=11;i>=0;i--)
		for (j=11;j>=0;j--)
			if (a[i]==b[j]) point=a[i];
	cout << point << endl;
	return 0;
}
