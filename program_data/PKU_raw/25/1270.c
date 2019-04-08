
int main()
{
	int n, temp = 0;
	int power[32] = {0,1};
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j < 32; j++)
		{
			power[j] *= 2;
			power[j] += temp;
			if(power[j] >= 10)
			{
				power[j] -= 10;
				temp = 1;
			}
			else
				temp = 0;
		}
	}
	int i = 31;
	while(power[i] == 0)
		i--;
	for(int j = i; j >= 1; j--)
		cout << power[j];
	cout << endl;
	return 0;
}