
int main()
{
	char allwords[WORD*LENGTH];

	int i;
	int minPos = 0, maxPos = 0, tmpPos = 0;
	int minLen = LENGTH, maxLen = 0, tmpLen = 0;

	gets(allwords);

	int len = strlen(allwords);

	for(i = 0; i < len+1; i++)
	{

		if(allwords[i] == ' ' || allwords[i] == '\0')
		{
			if(tmpLen > maxLen)
			{
				maxPos = tmpPos;
				maxLen = tmpLen;
			}
			if(tmpLen < minLen)
			{
				minPos = tmpPos;
				minLen = tmpLen;
			}
			allwords[i] = '\0';
			tmpLen = 0;
			tmpPos = i + 1;
		}
		else
		{
			tmpLen++;
		}
	}

	printf("%s\n", allwords + maxPos);
	printf("%s\n", allwords + minPos);


	return 0;
}