int main()
{
	char a[110]={0}, ans[110]={0};
	int aa[110]={0};
	int i, cal=0, n;
	cin >> a;
	n=strlen(a)-1;
	if (n==0)								//??????????
	{
		cout << 0 << endl;
		cout << a << endl;
		return 0;
	}
	for (i=0; i<=n; i++)
		aa[i]=a[i]-'0';
	i=0;									//??????
	while (i<n)
	{
		cal=aa[i]*10+aa[i+1];				//??????????
		while ((cal<13)&&(i<n-1))
		{
			cal=cal*10+aa[i+2];				//?????13??????
			ans[i]='0';
			i++;
		}
		ans[i]=cal/13+'0';					//????
		aa[i+1]=cal%13;
		i++;
	}
	ans[n]='\0';
	if ((ans[0]=='0')&&(ans[1]>'0'))
	{
		for (i=1; i<n; i++)
			cout << ans[i];					//???????
		cout << endl;
	}
	else
		cout << ans << endl;
	cout << cal%13 << endl;					//????
	return 0;								//main???????0
}