 
int main()
{
	char s[101];
	int i,j,len;
	char si;
	for(i=0;i<101;i++){
		s[i]=0;
	}
	gets(s);
	len=strlen(s);
	si=s[0];
	for(i=0;i<len-1;i++){
		s[i]=s[i]+s[i+1];
	}
	s[len-1]=s[len-1]+si;
	printf("%s",s);
}