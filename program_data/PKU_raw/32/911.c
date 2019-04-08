/**
* @file 1000012907_1.cpp
* @author ???
* @date 2010?11?17
* @description
* ??????: ?????
*/
int main()
{
	int n, i, len1, len2, j, k, char11[101], char22[101], flag = 0, answer[101];
	char char1[101], char2[101];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> char1 >> char2;
		len1 = strlen(char1);
		len2 = strlen(char2);
		memset(answer, '\0', sizeof(answer));
        memset(char11, '\0', sizeof(char11));
        memset(char22, '\0', sizeof(char22));
		k = 0;
		for (j = len1 - 1; j >= 0; j--)
		{
			char11[k] = char1[j] - '0';
			k++;
		}
		k = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			char22[k] = char2[j] - '0';
			k++;
		}
		for (j = 0; j < len1; j++)
		{
			if (char11[j] < char22[j])
			{
				char11[j + 1] = char11[j + 1] - 1;
				answer[j] = char11[j] + 10 - char22[j];
			}
			else
			{
				answer[j] = char11[j] - char22[j];
			}
		}
		for (j = len1 - 1; j >= 0; j--)
		{
			if (answer[j] != 0)
			{
				flag = 1;
			}
			if (flag == 1)
			{
				cout << answer[j];
			}
		}
		cout << endl;
	}
	return 0;
}






