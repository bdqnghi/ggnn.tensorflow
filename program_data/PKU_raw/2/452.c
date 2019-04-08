int main()
{
	int num[27] = {0},no[27][1000]={0};
	char s[27],ls;
	int l,i,max,t,j,flag,n,w;
	cin >> t;
	for (i = 1;i <= t;i++)
	{
		cin >> n >> s;
		l =	strlen (s);
		for (j = 0;j <= l-1;j++)
		{
			w = s[j] - 'A' + 1;
			num[w] ++;
			no[w][num[w]] = n;
		}
	}
	max = 0;
	for (i = 1;i <= 26;i++)
		if (num[i] > max)
		{
			max = num[i];
			flag = i;
		}
	ls = (char) 64+flag;
	cout << ls << endl << num[flag] << endl;
	for (i = 1;i <= num[flag];i++)
		cout << no[flag][i] << endl;
	cin >> w;
    return 0;
}