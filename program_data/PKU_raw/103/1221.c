main()
{
	char s[1001];
	int i,t,j,k;
	scanf("%s",s);
	k=strlen(s);
	for(i=0;i<k;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		s[i]=s[i]-'a'+'A';
	}
	t=1;
	for(i=0;i<k;i++)\
	{
		
		if(s[i]==s[i+1])
		t++;
		else {
		printf("(%c,%d)",s[i],t);t=1;continue;}
	}	
}