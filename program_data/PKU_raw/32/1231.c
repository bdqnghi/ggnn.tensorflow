/********************************************
 *@file   4.cpp                             *
 *@author ??                              *
 *@date   2013-11-19                        *
 *@description                              *
 *??????8??????                 *
 ********************************************
 */
int main()
{
	int n, i, p, q, nlen1, nlen2;
	int num1[101], num2[100];
	char str1[101], str2[101];
	cin >> n;
	for (i = 0; i < n; i++) // ????
	{	
		cin.get();
		cin.getline(str1, 101);
		cin.getline(str2, 101);
		//?????
		nlen1 = strlen(str1);
		nlen2 = strlen(str2);
		memset(num1, 0, sizeof(num1)); // ????
		memset(num2, 0, sizeof(num2)); // ????
		q = 0;

		//????
		for (p = nlen1 - 1; p >= 0; p--)
			num1[q++] = str1[p] - '0';
		q = 0;
		for (p = nlen2 - 1; p >= 0; p--)
			num2[q++] = str2[p] - '0';

		//???
		for (p = 0; p < 100; p++)
		{
			num1[p] -= num2[p];
			if (num1[p] < 0)
			{
				num1[p] += 10;
				num1[p+1]--;
			}
		}
		p = 100;

		//??0?
		while (num1[p] == 0)
			p--;

		//????
		for ( ; p >= 0; p--)
			cout << num1[p];
		if (i != n - 1 )
			cout << endl;
	}
	return 0;
}