void p_s(char str[],char substr[])
{
	int i,n,len;
	char s[13]={"\0"};
	len=strlen(str);
	for(i=0,n=0;i<len;i++)
		if(str[n]<str[i]) n=i;
	for(i=0;i<len+3;i++)
		s[i]= i<=n? str[i]:(i<=n+3? substr[i-n-1]:str[i-3]);
	printf("%s\n",s);
}
void main()
{
	int i,j;
	char str[10][10],substr[10][3];
	for(i=0;scanf("%s %s",str[i],substr[i])!=EOF;i++);
	for(j=0;j<i;j++)
	{
		p_s(str[j],substr[j]);
	}
}