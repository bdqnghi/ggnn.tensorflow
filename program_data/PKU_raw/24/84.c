
short IsAlpha(char ch)
{
	if (ch>='a'&&ch<='z')
		return 1;
	if (ch>='A'&&ch<='Z')
		return 1;
	return 0;
}

int main()
{
	char input[500], word[50][20];
	int max = 0, min = 0;
	char *pstr = input;
	int n = 0, i;

	gets(input);
	while (*pstr){
		while (!IsAlpha(*pstr))
			pstr++;
		sscanf(pstr, "%s", word[n]);
		pstr += strlen(word[n]);
		n++;
	}
	
	for (i=1; i<n; i++){
		if (strlen(word[i])>strlen(word[max]))
			max = i;
		if (strlen(word[i])<strlen(word[min]))
			min = i;
	}

	puts(word[max]);
	puts(word[min]);

	return 0;
}