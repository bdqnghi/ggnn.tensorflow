void main()
{
	char s[100];
	int n[26],l,i,j,m=0;
	for(i=0;i<26;i++) n[i]=0;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			m++;
			j=s[i]-'a';
			n[j]++;
		}

	}
	if(m==0) printf("No");
	else 
	{
		for(i=0;i<26;i++) if(n[i]!=0) printf("%c=%d\n",i+'a',n[i]);
	}
}
