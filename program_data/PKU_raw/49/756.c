//********************************
//*???????               **
//*??????                 **
//*???2012.11.10             **
//*******************************/


int main ()
{
	char str[500];
	int i, j, k, length, flag = 0;
	cin >> str;
	length = strlen(str);
	for (i = 1; i <= length -1; i++)
	{
		for (j = 0; j < length - i; j++)
		{
			if (str[j] == str[j + i])
			{
				for (k = 0; k <= (i / 2); k++)
				{
					if (str[j + k] != str[i + j - k])
					{
						flag = 1;
						break;
					}
				}
				for (k = j; (k <= j + i) && (flag == 0); k++)
					cout << str[k];
				if (flag == 1)
					flag = 0; 
				else
					cout << endl;
			}
		}
	}
	return 0;
}
					
