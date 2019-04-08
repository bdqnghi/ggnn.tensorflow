
int main()
{
	char word[50][101];
	char input[5001];
	int num = 0;
	gets(input);
	int len = strlen(input);
	for(int i=0; i<len; i++)
	{
		int j=0;
		while(i<len && ((input[i]>='a'&&input[i]<='z') || (input[i]>='A'&&input[i]<='Z')))
		{
			word[num][j] = input[i];
			j++;
			i++;
		}
		if(j>0)
		{
			word[num][j] = '\0';
			num++;
		}
	}
	int max_len=strlen(word[0]);
	int min_len=max_len;
	int max_index = 0, min_index = 0;
	for(int i=1; i<num; i++)
	{
		if(max_len < strlen(word[i]))
		{
			max_index = i;
			max_len = strlen(word[i]);
		}
		if(min_len > strlen(word[i]))
		{
			min_index = i;
			min_len = strlen(word[i]);
		}
	}
	printf("%s\n%s\n", word[max_index], word[min_index]);
}