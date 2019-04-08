//*********************************************
//*???????                            **
//*?????? 1100012914                   **
//*???2011.11.14                          **
//*********************************************


char num1[1000000], num2[100000];
int a, b, c, x = 0, i, len1, len2;
void change(int);
int main()
{
	cin >> a;
	cin >> num1;
	cin >> b;
	len1 = strlen(num1);
	int t, j;

	for (j = 0; j < len1; j++)
	{
		if (num1[j] >= 'a' && num1[i] <= 'z')
		{
			t = num1[j] - 'a' + 10;
			x = x * a + t;
		}
		else
			if(num1[j] >= 'A' && num1[j] <= 'Z')
			{
				t = num1[j] - 'A' + 10;
				x = x * a + t;
			}
			else
			{
				t = num1[j] - '0';
				x = x * a + t;
			}
	}
	
	change(x);
	
	len2 = strlen(num2);
	for (i = len2 - 1; i >= 0; i--)
	{
		cout << num2[i];
	}
	cin >> i;
	return 0;
}
void change(int x)
{
	int z, h = 0;
	char ch;
	if (x == 0)
		cout << 0 << endl;
	else
	{
		while (x != 0)
	{
		z = x % b;
		x = x / b;
		if (z >= 0 && z <= 9)
		{
			ch = z + '0';
			num2[h] = ch;
			h++;
		}
		else
		{
			z = z - 10;
			ch = z + 'A';
			num2[h] = ch;
			h++;
		}
	}
	}
}