int main(int argc, char* argv[])
{
	char string[30000];
	int i,len,count=0;
	gets(string);
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		if(string[i]!=' ')
			count++;
		if(string[i]==' '&&string[i+1]!=' ')
		{
			printf("%d,",count);
			count=0;
		}
	}
	printf("%d",count);
	return 0;
}