/********************************************
 *@file   2.cpp                             *
 *@author ??                              *
 *@date   2013-12-13                        *
 *@description                              *
 *??????12?????                  *
 ********************************************
 */
int main()
{
	int n, i, len, Count = 0;
	char ch[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> ch;
		len = strlen(ch);
		Count = Count + len + 1;
		if (Count > 81)
		{
			cout << endl;
			cout << ch;
			Count = len + 1;
		}
		else
		{
			if (i == 0)
				cout << ch;
			else
				cout << ' ' << ch;
		}
	}
	return 0;
}