void main()
{
	int A[26]={0},a[26]={0},l,i,n,m=0;
	char sen[500];
	gets(sen);
    l=strlen(sen);
	for(i=0;i<l;i++)
	{
		if(sen[i]>='a'&&sen[i]<='z'){m=1;a[sen[i]-'a']++;}
		if(sen[i]>='A'&&sen[i]<='Z'){m=1;A[sen[i]-'A']++;}
	}
	for(i=0;i<26;i++)
		if(A[i]!=0)printf("%c=%d\n",'A'+i,A[i]);
	for(i=0;i<26;i++)
		if(a[i]!=0)printf("%c=%d\n",'a'+i,a[i]);
		if(m==0)printf("No");
}
