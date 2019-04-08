int main()
{
	int a,i;
	char s[80],w[80];
	gets(s);
	gets(w);
	a=strlen(s);
	for (i=0;i<a;i++)
	{
		if((s[i]>='A')&&(s[i]<='Z'))
			s[i]+=32;
		if((w[i]>='A')&&(w[i]<='Z'))
			w[i]+=32;
	}
	for (i=0;i<a;i++)
	{
		if ((s[i]>w[i]))
		{
			printf(">");
			break;
		}
		if ((s[i]<w[i]))
		{
			printf("<");
			break;
		}
	}
	if(i==a)
		printf("=");
	return 0;
}

