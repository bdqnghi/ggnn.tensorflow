int convert1(char a)
{
	if ((a >= '0') && (a <= '9'))
		return a - '0';
	if ((a >= 'a') && (a <= 'z'))
		return (a - 'a' + 10);
	if ((a >= 'A') && (a <= 'Z'))
		return (a - 'A' + 10);
}
char convert2(int a)
{
	if ((a >= 0) && (a <= 9))
		return (a + 48);
	else
		return (a + 55);
}
int main()
{
	int a , b , len , k = 1 , i , j;
	long t = 0;
	char num[100] , p;
	int num1[100];
	cin >> a >> num >> b;
	len = strlen(num);
	for (i = len - 1 ; i >= 0 ; i--)
	{
		t = t + k * convert1(num[i]);
		k = k * a;
	}
	i = 1;
	while(t >= b)
	{
		num1[i] = t % b;
		i++;
		t = t / b;
	}
	num1[i] = t;
	for (j = i ; j >= 1; j--)
	{
		p = convert2(num1[j]);
		cout << p;
	}
	return 0;
}
	

	