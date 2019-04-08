int main()
{
	int booknumber;
	int order[1000];
	char author[1000][27];
	char single_author[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int author_booknumber[26]={0};
	int i,j,k;
	int tmp;


	scanf("%d",&booknumber);

	for(i=0;i<booknumber;i++)
	{
		scanf("%d%s",&order[i],author[i]);
		for(j=0;j<strlen(author[i]);j++)
		{
			for(k=0;k<26;k++)
			{
				if(author[i][j]==single_author[k])
				{
					author_booknumber[k]++;
					break;
				}
			}
		}
	}
	tmp=0;

	for(i=1;i<26;i++)
	{
		if(author_booknumber[i]>author_booknumber[tmp])
			tmp=i;
	}
	printf("%c\n",single_author[tmp]);
	printf("%d\n",author_booknumber[tmp]);
   
	for(i=0;i<booknumber;i++)
	{
		for(j=0;j<strlen(author[i]);j++)
		{
			if(author[i][j]==single_author[tmp])
			{
				printf("%d\n",order[i]);
				break;
			}
		}
	}


	return 0;
}




		

