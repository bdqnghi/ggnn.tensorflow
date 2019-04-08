int main()
{
    char s[502];
	int l = 0,k = 0,ii = 0,m = 0,step = 0,num = 0,flag = 0,i = 0,j = 0;
	cin >> s;
	l = strlen (s);
	for (j = 2;j <= l;j++)        //j?????
	{
		for (i = 0;i <= l-j;i++)    //i??????
		{
			flag = 1;
			for (ii = 1;ii <= j / 2;ii ++)
			{
				k = i + j - ii;
				if (s[i + ii - 1] != s[k])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1) 
			{
				for (ii = i;ii <= i + j - 1;ii++)
					cout << s[ii];
				cout << endl;
			}
		}
	}
	return 0;
}
