int main()
{
	int a = 0, b = 0, length1 = 0, c = 0;
	char shuru[200], result[200];
	int result1[200];
	cin >> a >> shuru >> b;
	length1 = strlen(shuru);
	int i = 0, j = 0, num = 0, l = 0;
	for(i = 0; i <= length1 - 1; i++)
	{
		l = 0;
		if(shuru[i] >= '0' && shuru[i] <= '9')
		{
			l = (int)shuru[i] - (int)'0';
		}
		if(shuru[i] >= 'a' && shuru[i] <= 'z')
		{
			l = (int)shuru[i] - (int)'a' + 10;
		}
		if(shuru[i] >= 'A' && shuru[i] <= 'Z')
		{
			l = (int)shuru[i] - (int)'A' + 10;
		}
		num = num * a + l;
	}
	while(1)
	{
		result1[j] = num % b;
		num = num / b;
		if(result1[j] >= 10)
		{
			result[j] = 'A' + result1[j] - 10;
		}
		else
		{
			result[j] = '0' + result1[j];
		}
		j++;
		if(num == 0)
		{
			break;
		}
	}
	c = j - 1;
	for(i = c; i >= 0; i--)
	{
		cout << result[i];
	}
	cout << endl;
	return 0;
}