char number[100];
char transnum[100];
void inttochar(int num)
{
	int i = 0;
	char temp[100];
	do
	{
		temp[i] = num % 10 + '0';
		num = num / 10;
		i++;
	}while(num != 0);
	for (int j = i - 1; j >= 0; j--)
	{
		number[i - 1 - j] = temp[j]; 
	}
	return;
}
void multiply(char number[], int k)
{
	int t = 0;
	for(int j = strlen(number) - 1; j >= 0; j--)
	{
		transnum[j + 1] = ((number[j] - '0') * k + t)% 10 + '0';
		t = ((number[j] - '0') * k + t)/ 10;
	}
	transnum[0] = t + '0';
	strcpy(number, transnum);
	return;
}
int main()
{
	int n;
	cin >> n;
	if (n < 31)
	{
		cout << (int)pow((double)2, n) << endl;
	}
	else
	{
		int num = (int)pow((double)2, 30);
		inttochar(num);
		n = n - 30;
		while (n != 0)
		{
			if (n <= 3)
			{
				int k = (int)pow((double)2, n);
				multiply(number, k);
				n = 0;
			}
			else
			{
				multiply(number, 8);
				n = n - 3;
			}
		};
		int i = 0;
		do
		{
			if(number[i] != '0')
				break;
			else
				i++;
		}while(1);
		for (int j = i; j < strlen(number); j++)
		{
			cout << number[j];
		}
		cout << endl;
	}
	return 0;
}