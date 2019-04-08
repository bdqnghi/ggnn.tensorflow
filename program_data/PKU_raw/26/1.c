int main()
{
	char input[101],res[101],last;
	int len,i,j = 0;
	gets(input);
	last = input[0];
	len = strlen(input);
	for(i = 0;i < len;i++)
	{
		if(last == input[i] && last == ' ')
			continue;
		else
			res[j++] = input[i];
		last = input[i];
	}
	res[j] = '\0';
	printf("%s\n",res);

	return 0;
}