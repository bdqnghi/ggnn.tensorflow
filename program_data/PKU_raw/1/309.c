/**
* @file homework.cpp
* @author ??
* @date 2010?12?03
* @description
* ??????: 1090 ????
*/
void jisuan(int ,int);
int times, sum, i, n;
int main()
{	
	cin >> times;
	for (i=0;i<times;i++)
	{
		sum = 0;
		cin >> n;
		jisuan (n, 2);
		cout << sum << endl;
	}
	return 0;
}
void jisuan(int n, int j)
{
	int i;
	for (i=j;i<=n;i++)
	{
		if (n > 1)
		{
			if (n % i == 0)
			{
				if (n % i != 0 && n > i)
					sum++;
				jisuan (n / i, i);
			}
		}
		if (n == i)
			sum ++;
	}
}
	
