//?????


//????????????
int getMaxCharIndex(char* str)
{
	int i = 0;
	int maxIndex = 0;
	char maxChar = str[0];

	for (i = 0; i < MAX_STR_LENGTH; i++)
	{
		if(str[i] == 0)
			break;
		
		if (maxChar < str[i])
		{
			maxChar = str[i];
			maxIndex = i;
		}
	}

	return maxIndex;
}

//????str?index???subStr
void insertStr(char* str, int index, char* subStr)
{
	int i;
	int strLength = strlen(str); //???????

	for (i = strLength; i > index; i--)
		str[i + MAX_SUBSTR_LENGTH - 1] = str[i];

	for (i = 0; i < MAX_SUBSTR_LENGTH - 1; i++)
		str[i + index + 1] = subStr[i];
}

int main()
{
	char str[MAX_STR_LENGTH];
	char subStr[MAX_SUBSTR_LENGTH];
	int maxIndex;

	while(scanf("%s%s", str, subStr) != EOF)
	{
		maxIndex = getMaxCharIndex(str);
		insertStr(str, maxIndex, subStr);

		printf("%s\n", str);
	}
	return 0;
}
