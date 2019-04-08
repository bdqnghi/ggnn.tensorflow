// * * * * * * * * * * * * * * *
// *????????           *
// *??????  1300013011   *
// *???2013.11.16           *
// * * * * * * * * * * * * * * *
int main()
{
	int n, i, j, k, len1, len2, num1[101] = {0}, num2[101] = {0}, num[101] = {0};
	char str1[200], str2[200];
	cin >> n;
	cin.get();
	for (i = 1; i <= n; i++)
	{
		memset (num1, 0, sizeof(num1));
		memset (num2, 0, sizeof(num2));
		memset (num, 0, sizeof(num));
		cin.getline(str1, 101);
		cin.getline(str2, 101);
		if (i!=n) 
			cin.get(); 
	    len1 = strlen(str1);
		len2 = strlen(str2);
		for (j = 0, k = len1 - 1; k >= 0; j++, k--)
			num1[j] = str1[k] - '0';
		for (j = 0, k = len2 - 1; k >= 0; j++, k--)
			num2[j] = str2[k] - '0';
		for (j = 0; j < len1; j++)
		{
			if (num1[j] >= num2[j])
				num[j] = num1[j] - num2[j];
			else
			{
				num[j] = num1[j] + 10 - num2[j];
				k = j + 1;
				while (num1[k] == 0)
				{
					num1[k] = 9;
					k++;
				}
                num1[k]--;
			}
		}
        for (j = len1 - 1; j >= 0; j--)
		{
			if (num[j] != 0)
			{
				for (k = j; k >= 0; k--)
		            cout << num[k];
				break;
			}		
		}
		cout << endl;
	}
	return 0;
}