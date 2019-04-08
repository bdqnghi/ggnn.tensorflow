int main()
{
	int i;
	char *s;
	s=(char *)malloc(sizeof(char)*1000);
	gets(s);
	for(i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)!=' ') printf("%c",*(s+i));
		else
		{
			while(*(s+i+1)==' ') i++;
			printf("%c",*(s+i));
		}
	}
	printf("\n");
	return 0;
}