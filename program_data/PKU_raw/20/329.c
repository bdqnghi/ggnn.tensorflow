void main()
{
	char s[16];
	s[15]=0;
	int i,len,p=15;
	while(gets(s))
   {
		len=strlen(s)-5;
	for(i=len;i>=0;i--)
		if(s[i]>=s[p]) p=i;
	for(i=0;i<=p;i++)
		printf("%c",s[i]);
	for(i=len+2;i<=len+4;i++)
		printf("%c",s[i]);
	for(i=p+1;i<=len;i++)
		printf("%c",s[i]);
	printf("\n");
	}
}
