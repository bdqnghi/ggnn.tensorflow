//**********?????????*********************
//**********???????*************************
//**********?????2012?11?27?***************
//**********???1200062701**********************


int ifsushu(int n)                                   //????????????1???
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		for(int f = n - 1;f >= 2; f--)               //??n?????
		{
			if(n % f == 0) break;
			if (f == 2)
			{ 
				return 1;
			}
		}
	}
	return 0;
}
int sum = 0;
int zhaoyinshu(int x, int max)
{
	if(x == 1)
	{
		sum++;
		return 0;
	}
	for(int i = max; i >= 2; i--)
	{
		if(x % i == 0)                // ??i?????
		{
			zhaoyinshu(x / i, i);
		}
	}
}
int main()
{
	int time, number, t;
	cin >> time;
	for(int j = 0; j < time; j++)
	{
		cin >> number;
		if(ifsushu(number) == 1)
		{
			cout << "1" << endl;
		}
		else
		{
			zhaoyinshu(number , number / 2);
			cout << sum + 1 << endl;       //????????????~
			sum = 0;
		}
	}
	return 0;
}

