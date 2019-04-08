int main()
{
	char s1[101]={0},s2[101]={0};
	gets(s1);
	char *i=s1,*j=s2;
	int l=strlen(s1);
	for(;i<s1+l-1;i++,j++)
	{
		*j=*i+*(i+1);
	}
	*j=*i+s1[0];
	puts(s2);
	return 0;
}
