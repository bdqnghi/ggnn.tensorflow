int main()
{
	char s[150],word[150]={'\0'};
	int k,m,n,i,j;
	char *point;
	gets(s);
	k=strlen(s);
	point=&s[0];
	for(i=0;i<=k-2;i++)
	{word[i]=*(point+i)+(*(point+i+1));}
	word[k-1]=s[0]+s[k-1];
	puts(word);
	return 0;
}