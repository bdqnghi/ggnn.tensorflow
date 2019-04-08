void cheng(int a[100], const int n, int flag);
int main()
{
	int n;
	int a[100] = {2};
	cin >> n;
	if(n == 0)
		cout << "1" << endl;
	else
		cheng(a, n, 0);
	return 0;
}
void cheng(int a[100], const int n, int flag)
{
	int i = 0, j = 0, count = 0, l = 0, k = 0;
	int b[100] = {0};
	count = 99;
	while(a[count] == 0)
		count --;
	if(flag == n - 1)
	{
		for(i = 0; i <= count; i++)
			cout << a[i];
	}
	else
	{
		for(i = count; i >= 0; i--)
		{
			b[j++] = a[i];
		}
		for(i = 0; i <= count; i++)
			b[i] = b[i] * 2;
		for(i = 0; i <= count; i++)
		{
			if(b[i] >= 10)
			{
				b[i] = b[i] - 10;
			    b[i + 1]++;
			}
		}
		l = count + 1;
		while(b[l] == 0)
			l--;
		for(i = l; i >= 0; i--)
		{
			a[k++] = b[i];
		}
		flag++;
		cheng(a, n, flag);
	}
}