/*
 * 1.cpp
 *
 *  Created on: 2013-1-13
 *      Author: Administrator
 */
int main()
{
	int n, i, sum = 0;
	char word[1000][50];
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> word[i];
	}
	for(i = 1; i <= n; i++)
	{
		cout << word[i];
		sum += strlen(word[i]);
		if(i < n && sum + strlen(word[i + 1]) + 1 <= 80)
		{
			cout << " ";
			sum++;
		}
		else
		{
			cout << endl;
			sum = 0;
		}

	}
	return 0;
}

