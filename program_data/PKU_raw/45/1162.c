int main()
{
	char zfc[MAX],word[MAX];
	int i,j,Match;
	scanf("%s%s",zfc,word);
	for(i=0; word[i]!='\0'; i++)
	{
		Match=0;
		for(j=0;zfc[j-1]!='\0';j++)
		{
			if(zfc[j]=='\0')
			{
				Match=1;
				break;
			}

			if(zfc[j]!=word[i+j])
			{
				break;
			}
		}

		if(Match==1)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}