int main()
{
	int hangshu, lieshu, array[101][101], i, j;
	cin >> hangshu >> lieshu;
	for (i = 0; i < hangshu; i++)
		for (j = 0; j < lieshu; j++)
			cin >> array[i][j];
	int count = 0;
	int total = hangshu * lieshu;
	lieshu--; hangshu--;
	for (i = 0; i <= hangshu; i++)
	{
		for (j = i; j <= lieshu - i; j++)
		{
			cout << array[i][j] << endl;
			count++;
		}
		if (count == total)
			break;
		for (j = i + 1; j <= hangshu - i; j++)	
		{
			cout << array[j][lieshu - i] << endl;
			count++;
		}
		if (count == total)
			break;
		for (j = lieshu - i - 1; j >= i; j--)
		{
			cout << array[hangshu - i][j] << endl;
			count++;
		}
		if (count == total)
			break;
		for (j = hangshu - i - 1; j >= i + 1; j--)
		{
			cout << array[j][i] << endl;
			count++;
		}
		if (count == total)
			break;
	}
	return 0;
}