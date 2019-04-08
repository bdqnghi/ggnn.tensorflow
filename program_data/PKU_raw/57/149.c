void main()
{
	char words[50][10]={{0},{0}};
	int i,n,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	//	gets(words[i]);
	    scanf("%s",words[i]);
	for(i=0;i<n;i++)
	{
		l=strlen(words[i]);
		if(words[i][l-2]==101)
		{
			words[i][l-2]=0;
			words[i][l-1]=0;
			printf("%s\n",words[i]);
		}
		else if(words[i][l-2]==108)
		{
			words[i][l-2]=0;
			words[i][l-1]=0;
			printf("%s\n",words[i]);
		}
		else if(words[i][l-3]==105)
		{
			words[i][l-3]=0;
			words[i][l-2]=0;
			words[i][l-1]=0;
			printf("%s\n",words[i]);
		}

	}
}