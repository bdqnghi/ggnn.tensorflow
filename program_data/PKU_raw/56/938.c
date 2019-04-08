void main()
{
	char s[5],t;
	int i,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		t=s[n-i-1];
		s[n-i-1]=s[i];
		s[i]=t;
	}
	for(i=0;i<n;i++)
	printf("%c",s[i]);
}