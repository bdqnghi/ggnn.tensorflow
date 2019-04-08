int main()
{
	char num[101], result[100]; 
	int r = 0, i, len, j, temp; 
	cin.getline(num,100);
	len = strlen(num);
	for (i = 0; i < len; i++)
	{
		temp = (int)num[i] - 48;
		result[i] = ((r * 10 + temp) / 13) + 48;
		r = (r * 10 + temp) % 13;
	}
	for (j = 0; j < len; j++)
	{
		if (result[j] != '0')
			break;
	}
	if (j == len)
	{
		cout << 0 <<endl;
		cout << r ;
	}
	else 
	{
		for (j; j < len; j++)
		    cout << result[j];
	    cout <<endl;
	    cout <<r;
	}
	return 0;
}