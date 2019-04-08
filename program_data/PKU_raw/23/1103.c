int main(void)
{
	char Str[105];
	gets(Str);
	int strl=strlen(Str);
	for(int i=strl-1;i>=0;i--)
	{
		if(Str[i]==' ')
		{
			Str[i]='\0';
			printf("%s ",Str+i+1);
		}
	}
	printf("%s",Str);
}