int num[101] = {0};
void fun()
{
	int temp = 0, j = 100;
	do
	{
		if (num[j] < 5)
		{
			num[j] =  num[j] * 2 + temp;
			temp = 0;
		}
		else
		{
			num[j] = num[j] * 2 - 10 + temp;
			temp = 1;
		}
		j--;
	} while(j >= 0);
	return;
}
int main()
{
	num[100] = 1;
	int N, i, flag = 0;
	cin >> N;
	for (i = 0; i< N; i++)
		fun();
	for (i = 0; i < 101; i++)
	{
		if (flag == 0 && num[i] == 0)
			continue;
		cout << num[i];
		flag = 1;
	}
	return 0;
}
