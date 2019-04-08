//????
//2010?11?16?
//1000012753 ???
int main()
{
	char str1[200];
	char stdard[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int i, j, l1, l2, l3, r, str2[200];
	double a, b, medium = 0.0;
	cin >> a >> str1 >> b;
	l1 = strlen(str1);
	for (i = 0; i < l1; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
			str1[i] -= 'a' - 'A';
	}
	j = 0;
	for (i = l1 - 1; i >= 0; i--)
		str2[j++] = str1[i];
	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < 36; j++)
		{
			if (str2[i] == stdard[j])
				medium += j * pow (a, i);
		}
	}
//	cout << medium;
	j = 0;
	while ((int)medium >= (int)b)
	{
		str2[j++] = (int)medium % (int)b;
		medium = (int)medium/(int)b;
	}
	str2[j] = (int)medium;
	for ( ; j >= 0; j--)
		cout << stdard[str2[j]];
	cout << endl;
			
//	itoa(medium, buf, (int)b);

/*	l2 = strlen(buf);
	r = 0;
	for (i = 0; i < l2; i++)
	{
		r = ((r * 10) + buf[i] - '0') % (int)b;
		for (j = 0; j < 36; j++)
		{
			if (j == r)
			{
				str2[i] = stdard[j];
				break;
			}
		}
	}
	str2[i] = '\0';
	l3 = strlen(str2);
	for (i = l3 - 1; i >= 0; i--)
		cout << str2[i];
	cout << endl;*/
	return 0;
}
