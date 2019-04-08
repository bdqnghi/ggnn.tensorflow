main()
{
	int i,j=1;
	char s[1000];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)	if(s[i]>=97) s[i]=s[i]-32;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i+1]==s[i]) j++;
		else 
		{
			printf("(%c,%d)",s[i],j);
			j=1;
		}
	}
}
