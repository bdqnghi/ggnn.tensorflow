void main()
{
	char a[300];
	int b[26]={0},i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		b[a[i]-'a']++;
	}
	for(i=0;i<26;i++)
	if(b[i]!=0)break;
	if(i==26)printf("No\n");
	for(i=0;i<26;i++)
		if(b[i]!=0)
		printf("%c=%d\n",i+'a',b[i]);
		
}