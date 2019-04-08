
char str[10000];

int main()
{
	int i,n,word,temp,start;
	gets(str);
	n=strlen(str);
	word=0;
	temp=0;
	start=0;
	for(i=0;i<n;i++)
	{
		if(str[i]!=' ')
		{
			word++;
			temp=0;
		}
		else if(temp==0)
		{
			if(start==0)
			{
				printf("%d",word);
				start++;
			}
			else printf(",%d",word);
			word=0;
			temp=1;
		}
	}
	if(start==0)
			printf("%d",word);
	else printf(",%d",word);	

	return 0;
}