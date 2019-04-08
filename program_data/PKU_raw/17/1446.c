int main()
{
	char a[100];
	int b[100] = {0};
	while (cin.getline(a,101))
	{
		cout << a << endl;
		char a1[100] = " ";
		int len = strlen(a);
		int i = 0;
		int lnum = 0, rnum = 0;
		for (i = 0; i < len; i++)
		{
			if (a[i] == '(')
			{
				b[lnum] = i;
				lnum++;
			}
			if (a[i] == ')')
			{
				rnum++;
				if (rnum > lnum)
				{	a1[i] = '?';
					rnum--;
				}
				else
				{
					lnum--;
					rnum--;
				}
			}
		}
		for (i = 0; i < lnum; i++)
			a1[b[i]] = '$';
		for (i = 0; i < len; i++)
		{
			if ((a1[i] == '$')||(a1[i] == '?'))
				cout << a1[i];
			else
				cout << " ";
			
		}
		cout << endl;
	}
	return 0;
}