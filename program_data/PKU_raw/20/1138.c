int findmax(char [],int);
int main()
{
	int i,len,k;
	int j;
	char str[15]={'\0'},substr[4]={'\0'};
	while(scanf("%s %s",str,substr)!=EOF)
	{
		len=strlen(str);
		i=findmax(str,len);
		for(j=len-1;j>i;j--)
			str[j+3]=str[j];
		for(j=i+1,k=0;j<i+4;j++,k++)
			str[j]=substr[k];
		printf("%s\n",str);
		for(i=0;i<15;i++)
			str[i]='\0';
		for(i=0;i<4;i++)
			substr[i]='\0';
	}
	return 0;
}
int findmax(char str[],int len)
{
	int i;
	char t;
	t=str[0];
	for(i=0;i<len-1;i++)
		if(t<str[i+1])
			t=str[i+1];
	for(i=0;i<len;i++)
		if(str[i]==t) return i;
}