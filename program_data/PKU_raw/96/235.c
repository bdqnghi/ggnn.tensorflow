int main()
{
	char num[101] = {0},ans[101]={0};
	char ch;
	int ni,sh = 0,i,l,ys = 0,flag;
	cin >> num;
	l = strlen(num);
	for (i = 0;i <= l-1;i++)
	{
		ni = num[i] - '0';
		ys = ys * 10 + ni;
		sh = ys / 13;
		ch = (char) (sh + 48);
		ans[i] = ch;
		ys = ys - sh * 13;
	}
	flag = 0;
	for (i = 0;i <= l-1;i++)
	{	
		if (ans[i] != '0')
			flag = 1;
		if (flag == 1) 
			cout << ans[i] ;
	}
	if (flag == 0) 
		cout << '0'; 
	cout << endl;
	cout << ys;
    return 0;
}