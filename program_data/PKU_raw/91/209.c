int main()
{
	char *s,*s1;
	int i,n,m=0;
	s=(char*)malloc(100*sizeof(char));
	s1=(char*)malloc(100*sizeof(char));
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
	{
		*(s1+m)=(char)(*(s+i)+*(s+i+1));
		m++;
	}
	*(s1+n-1)=(char)(*s+*(s+n-1));
	for(i=0;i<n;i++)
	{
		printf("%c",*(s1+i));
	}
	return 0;
}