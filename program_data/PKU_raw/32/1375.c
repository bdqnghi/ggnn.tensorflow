int main()
{
	char str1[101], str2[101], kongge[101];
	int num1[101] , num2[101], result[101] ;
	int len1, len2, i, j, n;
	cin >> n;
	cin.get();
	for(i = 1; i <= n; i++)
	{
		memset(str1, 0, 101);
		memset(str2, 0, 101);
		memset(num1, 0, 101);
		memset(num2, 0, 101);
		memset(result, 0, 101);
		cin.getline(str1, 101);
		len1 = strlen(str1);
		for(j =  0; j < len1 ; j++ )
			num1[j] = str1[j] - '0';
		cin.getline(str2, 101);
		len2 = strlen(str2);
		for(j = 0; j < len2; j++ )
			num2[len1 - 1 - j] = str2[len2 - 1 - j] - '0';
		for(j = len1 - 1; j >= len1 - len2; j-- )
		{
			if(num1[j] >= num2[j])
				num1[j] = num1[j] - num2[j];
			else
			{
				num1[j] = 10 + num1[j] - num2[j];
//				if(num1[j - 1] > 0)
					num1[j - 1] = num1[j - 1] - 1 ;
/*				else
				{
					int t = j - 1;
					while(num1[t] == 0)
					{
						num1[t] = 9;
						t--;
					}
					num1[t] = num1[t] - 1;
				}*/
			}
		}
		j = 0;
		while(num1[j] == 0)
			j++;
		for(; j < len1; j++)
			cout << num1[j];
		cout << endl;
		cin.getline(kongge, 101);
	}
	return 0;
}
		
		




