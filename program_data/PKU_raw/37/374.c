int main()
{
	int t,i;
	scanf("%d\n", &t);
	for(i=0; i<t; i++)
	{
	char word[100000]={0},*p=word;
	int number[26]={0},*q=number;
	int flag=0, count, j;
		gets(word);
		count = strlen(word);
		for(j=0; j<count; j++)		
			*(q+*(p+j)-'a')=*(q+*(p+j)-'a')+1;
		for(j=0; j<count; j++)
			{
				if(*(q+(*(p+j)-97))==1)
				{
					printf("%c\n",*(p+j));
					flag=1;
					break;
				}
			}
		if(flag==0)
			printf("no\n");
	}
	return 0;
}