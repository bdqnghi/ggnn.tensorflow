
int main()
{
	int n,i,j,len;
	char word[33];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",word);
		len=strlen(word);
		if(word[len-1]=='r')
		{
			for(i=0;i<len-2;i++)
				printf("%c",word[i]);
		}
		else if(word[len-1]=='y')
		{
			for(i=0;i<len-2;i++)
				printf("%c",word[i]);
		}
		else 
		{
			for(i=0;i<len-3;i++)
				printf("%c",word[i]);
		}
		printf("\n");
	}
	return 0;
}