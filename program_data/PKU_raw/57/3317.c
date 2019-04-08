void main()
{
	int n,i;
	char word[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		if(!strcmp(word+strlen(word)-2,"er")||!strcmp(word+strlen(word)-2,"ly"))
			word[strlen(word)-2]=0;
		else if(!strcmp(word+strlen(word)-3,"ing"))
			word[strlen(word)-3]=0;
		puts(word);
	}
}