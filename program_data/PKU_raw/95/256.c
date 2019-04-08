int main()
{
	char s[250],t[250];
	int i;
	gets(s);
	gets(t);
	for (i=0;i<strlen(s);i++)
	{
		if (s[i]>=65 && s[i]<=92)
			s[i]+=32;
	}
	for (i=0;i<strlen(t);i++)
	{
		if (t[i]>=65 && t[i]<=92)
			t[i]+=32;
	}
	if (strcmp(s,t)>0)
		printf(">\n");
	else if (strcmp(s,t)<0)
		printf("<\n");
	else printf("=\n");
	return 0;
}

