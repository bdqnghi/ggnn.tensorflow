int main()
{
	char cNum1[300];
	char cNum2[300];
	cin >> cNum1 >> cNum2;
	int nNum1[300] = {0};
	int nNum2[300] = {0};
	int nResult[300] = {0};
	int i,j;
	for(i = strlen(cNum1) - 1, j = 0; i >= 0; i --, j ++)
	{
		nNum1[j] = cNum1[i] - '0';
	}
	for(i = strlen(cNum2) - 1, j = 0; i >= 0; i --, j ++)
	{
		nNum2[j] = cNum2[i] - '0';
	}
	for(i = 0; i < 299; i ++)
	{
		nResult[i] = nResult[i] + nNum1[i] + nNum2[i];
		if(nResult[i] >= 10)
		{
			nResult[i + 1] ++;
			nResult[i] %= 10;
		}
	}
	while(nResult[i] == 0 && i != 0)
	{
		i --;
	}
	for( ; i >= 0; i --)
	{
		cout << nResult[i];
	}
	cout << endl;
	return 0;
}