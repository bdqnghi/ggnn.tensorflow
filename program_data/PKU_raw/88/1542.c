

/**
* @author ??
* @date 2010-12-8
* @description
* ??????:???? 
*/

int main()
{
	int flag = 1, count = 0;
	char str[31];
	cin.getline(str, 31);
	char *a = str;
	for (int i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 48 && *(a + i) <= 57)
		{
			if (!flag)
				flag = 1;
			if (flag == 1)
				count ++;
			flag = 2;
			cout << *(a + i);
		}
		else
		{
			if (flag)
				cout << endl;
			flag = 0;
		}
	}
	cout <<endl;

	return 0;
}


	