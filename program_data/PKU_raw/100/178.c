void main()
{
	char a[300];
	int i,n,letter[26],total=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<=25;i++)
		letter[i]=0;
	for(i=0;i<=n-1;i++)
		if(a[i]>='a'&&a[i]<='z')
			letter[a[i]-'a']++;
	for(i=0;i<=25;i++)
		if(letter[i]>0)
		{
			printf("%c=%d\n",i+'a',letter[i]);
			total++;
		}
	if(total==0)
		printf("No");
	getchar();
	getchar();
}
