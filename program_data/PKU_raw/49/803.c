int main()
{
	char str[500];
	cin >> str;
	int len, i, j, k, flag, count,start, end;
	len = strlen(str);
	for (i = 2; i <= len - 1; i++)      // i???????????
	{
		for (j = 0; j <= len - i; j++)  // j???????????,len - i???????????
		{
			flag = 0;
			count = j;
			for (k = j + i - 1; k >= count; count++, k--)  // ?k = j?
			{
				flag = 0;
				if (str[count] == str[k])
				{
					flag = 1;      // ????????
				}
				else 
				{
					flag = 0;
					break;
				}
                // ??i??????????????i?????????k???count?count + 1
				if ((flag == 1) && ((k == count) || (k == count + 1))) 
				{
					for (start = j; start <= j + i - 1; start++)
					{
						cout << str[start];
						if (start == j + i - 1)
						{
							cout << endl;
						}  // end for
					}  // end for
				} // end if
			} // end for k
		} // end for j 
	} // end for i
	return 0;
}
