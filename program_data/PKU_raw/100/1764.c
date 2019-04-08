int main()
{
	char word[LEN];
	char j;
	int count[NUM]={0};
	int i,len,e;
	e=0;
	scanf("%s",word);
	len=strlen(word);
	for(i=0;i<len;i++)
		{
		j=word[i];
			if(j<='Z'&&j>='A')
			{
				count[j-'A']++;	
				e++;
			}
			else if(j<='z'&&j>='a')
			{
				count[j-'a'+26]++;
				e++;
			}
	}
	for(j='A';j<='Z';j++)
	{
		if(count[j-'A']>0)
		{
	        printf("%c=%d\n",j,count[j-'A']);
		}
	}
	for(j='a';j<='z';j++)
	{
		if(count[j-'a'+26]>0)
		{
	        printf("%c=%d\n",j,count[j-'a'+26]);
		}
	}
	  if(e==0)
			{
				printf("No");
			}				
    return 0;
}