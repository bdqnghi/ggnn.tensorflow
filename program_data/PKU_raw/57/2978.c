int main(int argc, char* argv[])
{
	int n;
	char word[100];
	char *p;
	int i,len;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		memset(word,'\0',sizeof(word));
		p=word;
		scanf("%s",word);
		len=strlen(word);
		p=p+len-2;
		if(*p=='e')
		{
			*p='\0';
			printf("%s\n",word);
		}
		else if(*p=='l')
		{
			*p='\0';
			printf("%s\n",word);
		}
		else
		{
			*(p-1)='\0';
			printf("%s\n",word);
		}
	}

	return 0;
}