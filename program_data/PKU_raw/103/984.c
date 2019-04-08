int main()
{
	char a[1100]={0};
	int i, ans=1;
	cin >> a;
	for (i=0; i<(int)strlen(a); i++)
		if ((a[i]>='a')&&(a[i]<='z'))
			a[i]=a[i]-'a'+'A';
	cout << '(' << a[0] << ',';
	for (i=1; i<(int)strlen(a); i++)
	{
		if (a[i]==a[i-1])
			ans++;
		else
		{
			cout << ans << ")(" << a[i] << ',';
			ans=1;
		}
	}
	cout << ans << ')' << endl;
	return 0;
}