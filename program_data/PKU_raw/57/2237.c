int main()
{
	char word[max];
	int p,n,i;
	void del(int x,char word[max]);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",word);
		p=strlen(word)-1;
		del(p,word);
		printf("%s\n",word);
	}
}

void del(int x,char word[max])
{
	if(word[x]=='g')
		word[x-2]=0;
	else
		word[x-1]=0;
}