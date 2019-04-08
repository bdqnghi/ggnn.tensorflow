

/**
* @file 1000012800_1.cpp
* @author ??
* @date 2010-10-27
* @description
* ??????:???
*/

int main()
{
	int n, i;

	cin >> n;
	for (i = 0; i < n; i ++)
	{
		int year, month1, month2, t, sum = 0;
		cin >> year >> month1 >> month2;
		if (month1 > month2)
		{
			t = month1;
			month1 = month2;
			month2 = t;
		}
		for ( int j = month1; j < month2; j++)
		{
			if ( (j == 1) || (j == 3) || (j == 5) || (j == 7) || (j == 8) || (j == 10) || (j == 12) )
				sum += 31;
			else if (  (j == 4) || (j == 6) || (j == 9) || (j == 11) )
				sum += 30;
			else
			{
				if ( !(year % 400) || ((year % 100) && !(year % 4)))
					sum += 29;
				else
					sum += 28;
			}
		}
		if (sum % 7)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}
