
void main()
{
	int n,i,a;
	char word[20],*p;

	scanf("%d",&n);
	while(n>0)
	{
		scanf("%s",word);
		a=strlen(word);
		p=word+a-1;
		if(*(p-1)=='e'&&*p=='r')
		{
			*(p-1)='\0';
			printf("%s\n",word);
		}
		else if(*(p-1)=='l'&&*p=='y')
		{
			*(p-1)='\0';
			printf("%s\n",word);
		}
		else if(*(p-2)=='i'&&*(p-1)=='n'&&*p=='g')
		{
			*(p-2)='\0';
			printf("%s\n",word);
		}
         n--;
	}
}