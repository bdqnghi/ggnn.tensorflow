
int reverse(int num)
{
	char str[100], revstr[100];
	int i, len;
	sprintf(str, "%d", num);
	len = strlen(str);
	if(str[0] == '-')
	{
		for(i = 1; i < len; i++)
		{
			revstr[i] = str[len - i];
		}
		revstr[0] = '-';
		revstr[len] = '\0';
	}
	else
	{
		for(i = 0; i < len; i++)
		{
			revstr[i] = str[len - i - 1];
		}
		revstr[len] = '\0';
	}
	return(atoi(revstr));
}

void main()
{
	int i, num;
	for(i = 0; i < 6; i++)
	{
		scanf("%d", &num);
		printf("%d\n", reverse(num));
	}
}
