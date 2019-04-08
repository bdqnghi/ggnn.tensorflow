/**
* @file 1000012800_1.cpp
* @author ??
* @date 2010-11-18
* @description
* ??????:????
*/


int main()
{
	int n , num[500], tmp, flag = 0;
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < n; i ++)
	{
		for (int j = n - 1; j > i; j --)
		{
			if (num[j] < num[j - 1])
			{
				tmp = num[j];
				num[j] = num[j - 1];
				num[j - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i ++)
	{
		if (num[i] % 2)
		{
			if (!flag)
				cout << num[i];
			else
				cout << "," << num[i];
			flag ++;
		}
	}
	cout << endl;

		return 0;
}

