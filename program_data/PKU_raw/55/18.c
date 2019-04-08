
int char_to_num(char c)
{
	if ('0'<=c && c<='9')
		return c-'0';
	if ('a'<=c && c<='z')
		return 10+(c-'a');
	if ('A'<=c && c<='Z')
		return 10+(c-'A');
}

char num_to_char(int n)
{
	if (n<10)
		return n+'0';
	else
		return n-10+'A';
}

int main()
{
	int a, b, i, length;
	char n[100];
	long num, pow;
	scanf("%d %s %d", &a, n, &b);
	length = strlen(n);
	pow = 1;
	num = 0;
	// get the number
	for (i=length-1; i>=0; i--)
	{
		num = num + char_to_num(n[i])*pow;
		pow = pow * a;
	}

	for (i=0; i<100; i++)
	{
		n[i] = num_to_char(num%b);
		num = num / b;
		if (num == 0)
			break;
	}
	for ( ; i>=0; i--)
		printf("%c", n[i]);
	printf("\n");
	
	return 0;
}