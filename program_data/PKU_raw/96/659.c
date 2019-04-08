//********************************
//*???3.cpp   **
//*?????? 1200012768 **
//*???2012.11.  **
//*?????13  **
//********************************
int main()
{
	char ch[101];
	int res[100], rem = 0, i = 0, j, flag = 0;
	for	(i = 0; i < 101; i++)
	{
		cin.get(ch[i]);
		if (ch[i] == '\n')
			break;
		res[i] = (int)(ch[i] - '0' + 10 * rem) / 13;
		rem = (int)((ch[i] - '0' + 10 * rem) % 13);
	}
	for (j = 0; j < i; j++)
	{
		if (flag == 0 && res[j] != 0)
		{
			cout << res[j];
			flag = 1;
		}
		else if (flag != 0)
			cout << res[j];
	}
	if (flag == 0)
		cout << 0;
	cout << endl << rem << endl;
	return 0;
}
