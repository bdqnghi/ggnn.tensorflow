
int main()
{
	char str[500];
	int count, s;
	cin >> str;
	for (int i = 2; i <= strlen(str); i++)   //??????????
	{
		for (int j = 0; j < strlen(str) - i + 1; j++)  //??????????????????i
		{
			count = 0;    //???????0
			s = 2 * j + i - 1;
			for (int k = j; k < j + i; k++)   //???????
			{
				   
			
				if (str[k] == str[s - k])
				{
					count++;
				}
			}
			if (i % 2 == 0)
			{
			    if (count == i)
				{
				    for (int p = j; p < j + i; p++)
					{
					    cout << str[p];
					}
				    cout << endl;
				}
			}
			if (i % 2 == 1)
			{
                if (count == i - 1)
				{
				    for (int q = j; q < j + i; q++)
					{
					    cout << str[q];
					}
				    cout << endl;
				}
			}
		}
	} 

	return 0;
}