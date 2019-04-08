int MaxIndex(char * str)
{
	char maxChar = 0;
	int i = 0,j = 0;
	while(*str!=0)
	{
		if(maxChar < *str)
		{
			maxChar = *str;
			i = j;	
		}
		j++;
		str++;
	}
	return i;
}
void fun(char * str, char * substr)
{
	int max = MaxIndex(str);
	str += max;
	char * temp = str;
	while(*(temp++) != 0);
	*(temp+3) = 0;
	while((--temp) != str)
	{
		*(temp+3) = *temp;
	}
	while(*substr != 0)
	{
		*(++temp) = *substr++;
	}
}
int main()
{
	char str[16], substr[4];
	int i, lenth;
	int maxAsc = 0;
	char maxChar = 0;
	while(scanf("%s%s",str,substr) == 2)
	{
		fun(str,substr);
		printf("%s\n",str);
	}
}
