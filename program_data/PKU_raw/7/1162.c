
int main()
{
	char str[300], subString[300], replacement[300];
	char *p, *q;
	int strLen, subLen, repLen, move, i;
	cin >> str >> subString >> replacement;
	strLen = strlen(str);
	subLen = strlen(subString);
	repLen = strlen(replacement);
	p = strstr(str, subString);
	if (p == NULL)
	{
		cout << str;
		return 0;
	}
	q = replacement;
	if (repLen > subLen)
	{
		move = repLen - subLen;
		for (q = str + strLen + move; q >= p + repLen; q--)
		{
			*q = *(q - move);
		}
		i = 0;
		q = replacement;
		while (i < repLen)
		{
			*p++ = *q++;
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < repLen)
		{
			*p++ = *q++;
			i++;
		}
		if (repLen < subLen)
		{
			move = subLen - repLen;
			while (*(p + move) != '\0')
			{
				*p++ = *(p + move);
			}
			*p = '\0';
		}
	}
	cout << str << endl;
	return 0;
}
