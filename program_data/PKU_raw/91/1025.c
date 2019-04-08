int main()
{
	char ch[101],str[101];
	char *p;
	int i,j,k;
	gets(ch);
	k=strlen(ch);
	p=ch;
	for (i=0;i<k-1;i++)
	{
		str[i]=*p+*(p+1);
		p++;
	}
	str[k-1]=*p+ch[0];
    for (i=0;i<k;i++)
		printf("%c",str[i]);
	return 0;
}