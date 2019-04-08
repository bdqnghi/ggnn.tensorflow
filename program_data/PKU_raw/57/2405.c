void main()
{
	int i,n,t;
	char word[50][20]={'\0'},temp[20]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s",word[i]);
	for(i=0;i<n;i++)
	{
		t=strlen(word[i]);
		if(word[i][t-1]=='r'||word[i][t-1]=='y')
		{
			strncpy(temp,word[i],t-2);
			strcpy(word[i],temp);
		}
		else
		{
			strncpy(temp,word[i],t-3);
			strcpy(word[i],temp);
		}
		for(t=0;t<20;t++) temp[t]='\0';
		printf("%s\n",word[i]);
	}
}
