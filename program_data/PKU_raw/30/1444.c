int main()
{
	int n, i, ans=0;
	char s[4];
	cin >> n;
	for (i=1; i<=n; i++)
	{
		sprintf(s,"%d",i);
		if ((s[0]!='7')&&(s[1]!='7')&&(s[2]!='7')&&(s[3]!='7')&&(i%7!=0))
			ans+=i*i;
	}
	cout << ans << endl;
	return 0;
}