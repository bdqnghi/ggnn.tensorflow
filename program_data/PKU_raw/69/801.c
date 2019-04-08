int main()
{
	char a[501], b[501];
	int  a1[502], b1[502], result[502];
	int length1 = 0, length2 = 0, i = 0, j = 0, length = 0;
	cin.getline(a,500);
	cin.getline(b,500);
	length1 = strlen(a);
	length2 = strlen(b);
	memset(a1,0,sizeof(a1));
	memset(b1,0,sizeof(b1));
	memset(result, 0 ,sizeof(result));
    for(i = 0; i <= length1 - 1; i++)
	{
		a1[i] = (int)a[length1 - 1 - i] - (int)'0';
	}
	for(i = 0; i <= length2 - 1; i++)
	{
		b1[i] = (int)b[length2 - 1 - i] - (int)'0';
	}
	for(i = 0; i <= 500; i++)
	{
		result[i] = a1[i] + b1[i] + result[i];
		if(result[i] > 9)
		{
			result[i] = result[i] - 10;
			result[i+1]++;
		}
	}
	for(i = 500; i >= 0; i--)
	{
		if(result[i] != 0)
			break;
	}
	if(i != 0)
	{
		for(j = i; j >= 0; j--)
		{
			cout << result[j];
		}
	}
	if(i == -1)
		cout << 0;
	cout << endl;
	return 0;
}