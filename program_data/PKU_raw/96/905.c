int main()
{
	char c;
	int a[100]={0},b=0,m=0,i;
	while (cin>>c)
	{
		b=b*10+(int)c-48;
		a[m]=b/13;
		b=b-a[m]*13;
		m++;
	}
	for (i=0; a[i]==0; i++);
         if (i>=m) cout<<'0';
	for (; i<m; i++) cout<<a[i];
	cout<<endl;
	cout<<b<<endl;
	return 0;
}