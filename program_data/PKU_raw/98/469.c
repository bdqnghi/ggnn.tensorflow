int main()
{
	int n,i,length=0;
	char word[41];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&word);
		if(i==0)
			printf("%s",word),length=strlen(word);
		else
		{
				length+=(strlen(word)+1);
				if(length>80)
					printf("\n%s",word),length=strlen(word);
				else
					printf(" %s",word);
		}
	}
	return 0;
}
