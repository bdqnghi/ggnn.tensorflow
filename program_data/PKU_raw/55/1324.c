int main()
{
	int a = 0, i = 0;
	int b, j, num[100] = {0}, sum  = 0, flag1 = 0, flag2 = 0, l;
	char str1[100];
	cin >> a >> str1 >> b;
	l = strlen(str1);
	for (i = 0; i <= l - 1; i++)
	{
		if(str1[i] > 96)
			str1[i] = str1[i] - 87;
		else if (str1[i] > 64)
			str1[i] = str1[i] - 55; 
		else
			str1[i] = str1[i] - '0';
		sum = sum * a + str1[i];
	}
	for(j = 0; sum > 0; j++)
	{
		num[j] = sum % b;
		sum = sum / b;
	}
	j--;
	for(; j >= 0; j--)
	{
		if((num[j] != 0) && (flag1 == 0))
		{
			if(num[j] > 9)
			{
				num[j] = num[j] + 55;
				cout << (char)num[j];
			}
			else 
				cout << num[j];
			flag1 = 1;
			flag2 = 1;
			j--;
		}
		if(flag1 == 1)
		{
			if(num[j] > 9)
			{
				num[j] = num[j] + 55;
				cout << (char)num[j];
			}
			else 
				cout << num[j];
				flag2 = 1;
		}
	}
	if(flag2 == 0)
		cout << "0";
	return 0;
}








