
int chrtoint(char ch)
{
	if (ch>='0' && ch<='9')
		return ch-'0';
	else if (ch>='A' && ch<='Z')
		return ch-'A'+10;
	else if (ch>='a' && ch<='z')
		return ch-'a'+10;
	else
		return -1;
}

char inttochr(int a)
{
	if (a>=0 && a<=9)
		return (char)(a+'0');
	else if (a>=10 && a<=35)
		return (char)(a-10+'A');
	else
		return -1;
}

int main()
{
	char str[100]={0};
	long a, b;
	long num;
	scanf("%d %s %d", &a, str, &b);
	int len=0, i;
	while (str[len]>0)
		len++; //???????

	//a??->10??
	num=0;
	for (i=0;i<len;i++)
	{
		num=num*a+chrtoint(str[i]);
	}

	//10??->b??
	str[0]='0';
	len=0;
	while (num>0)
	{
		str[len]=inttochr(num%b);
		len++;
		num/=b;
	}
	if (len==0) len++; //??0???

	//????
	for (i=len-1;i>=0;i--)
		putchar(str[i]);

	return 0;
}
