

/**
* @file 1000012800_1.cpp
* @author ??
* @date 2010-11-24
* @description
* ??????:??
*/

int main()
{
	char a[501];
	cin >> a;
	int len = strlen(a);
	for (int i = 2; i <= len; i ++)
		for(int j = 0; j + i - 1 < len; j ++)
		{
			int flag = 1;
			int m = j + i - 1;
			for (int k = 0; j + k <= m - k; k ++)
			{
				if (a[j + k] != a[m - k])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (int n = 0; n < i; n ++)
					cout << a[j + n];
				cout << endl;
			}
		}
		return 0;
}




