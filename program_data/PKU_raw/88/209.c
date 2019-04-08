int main()
{
	int i;
	char *s;
	s=(char *)malloc(sizeof(char)*30);
	gets(s);
	for(i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)>'0'-1&&*(s+i)<'9'+1)
		{
			if(*(s+i+1)>'0'-1&&*(s+i+1)<'9'+1)
			printf("%c",*(s+i));
			else printf("%c\n",*(s+i));
		}
	}
	return 0;
}
