
int main()
{
	void cut1(char a[],int b);
	void cut2(char a[],int b);
	char word[32];
	int n,i,a,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{   
		for(j=0;j<=31;j++)
		word[j]='\0';
		scanf("%s",word);
		a=strlen(word);
		if(word[a-3]=='i')
			cut1(word,a);
		if(word[a-2]=='l'||word[a-2]=='e')
			cut2(word,a);
		printf("%s\n",word);
	}
	return 0;
}
void cut1(char a[],int b)
{
	a[b-3]='\0';
}
void cut2(char a[],int b)
{
    a[b-2]='\0';
}