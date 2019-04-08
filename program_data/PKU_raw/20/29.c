int main()
{
	char ch[20],a[5],b[10];
	int i, len;
	int max, num;
	while (gets(ch) != NULL)
	{
		num = 0;
		len = strlen(ch);
		for (i = len - 3; i < len; i++)
			a[num++] = ch[i];
		a[num] = '\0';
		max = 0;
		for (i = 0; i < len - 4; i++)
			if (ch[i] > ch[max])
				max = i;
		num = 0;
		for (i = max + 1; i < len - 3; i++)
			b[num++] = ch[i];
		b[num-1] = '\0';
		ch[max+1] = '\0';
		strcat(ch,a);
		strcat(ch,b);
		puts(ch);
	}
	return 0;
}
