/*
 * 1.cpp
 *
 *  Created on: 2012-11-25
 *      Author: Administrator
 */
int main()
{
	int t, i, j = 0;
	int b[125] = {0};
	char a[100050];
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		cin >> a;
		memset (b, 0, sizeof(b));
		j = 0;

	while(a[j] != '\0')
	{
		b[a[j]]++;
		j++;
	}
	j = 0;
	while(a[j] != '\0')
	{
		if(b[a[j]] == 1)
		{
			cout << a[j] << endl;
			break;
		}
		j++;
	}
	int len = strlen(a);
	if (j == len)
	    cout << "no" << endl;
	}
	return 0;


}
