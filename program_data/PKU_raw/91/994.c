int main()
{
	char s1[101],s2[101]={'\0'},*p1=s1,*p2=s2;
	int n;
	gets(s1);
	n=strlen(s1);
	for(;p1<s1+n-1;p1++,p2++)
		*p2=*p1+*(p1+1);
	*p2=*p1+s1[0];
	puts(s2);
	return 0;
}