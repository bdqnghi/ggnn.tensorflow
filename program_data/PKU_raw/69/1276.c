
int main()
{
	char str1[260], str2[260];
	int num1[260]={0}, num2[260]={0}, len1, len2, i, j, len;
	cin >> str1 >> str2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	for (i = 0; i < len1; i ++)
	{
		num1[i] = str1[len1-i-1] - '0';
//		cout << num1[i];
	}
//	cout << endl;
	for (i = 0; i < len2; i ++)
	{
		num2[i] = str2[len2-i-1] - '0';
//		cout << num2[i];
	}
//	cout << endl;
	len = (len1 > len2 ? len1 : len2);
	for (i = 0; i < len; i ++)
	{
		num1[i] += num2[i];
		if (num1[i] >= 10)
		{
			num1[i] -= 10;
			num1[i+1] ++;
		}
//		cout << num1[i] << " ";
	}
//	cout << endl;
	for (i = 259; i > 0; i --)
	{
		if (num1[i] != 0)
			break;
	}
	for (; i >= 0; i --)
		cout << num1[i];
	return 0;
}
