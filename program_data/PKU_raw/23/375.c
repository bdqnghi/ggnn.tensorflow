int main()
{
	char a[10][100]={{'\0'}};
	int n=0;
	while (cin>>a[n])n++;
	for (int i = n-1; i > 0;--i)cout<<a[i]<<' ';
	cout<<a[0]<<endl;
	return 0;
}