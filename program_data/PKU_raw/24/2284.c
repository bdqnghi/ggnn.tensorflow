/*
 *??????????.cpp
 *?????
 *????: 2012-12-24
 *????????????
 */


int main(){
	char word[210][30];
	int len[210], i = 0, j, max = -101, min = 100010, pmax, pmin;

	while (cin >> word[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		len[j] = strlen(word[j]);
	}
	for (j = 0; j < i; j++)
	{
		if (len[j] > max)
		{
			max = len[j];
			pmax = j;
		}
		if (len[j] < min)
		{
			min = len[j];
			pmin = j;
		}
	}
	for (j = 0; j < len[pmax]; j++)
	{
		cout << word[pmax][j];
	}
	cout << endl;
	for (j = 0; j < len[pmin]; j++)
	{
		cout << word[pmin][j];
	}
	return 0;

}
