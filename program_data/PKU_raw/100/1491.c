	char a[302];
	int flag[302],upper[27]={0},lower[27]={0};
	int len,t=0;
void get()
{
	int i;
	gets(a);
	len=strlen(a);
	for(i=0;i<27;i++)
	{
		upper[i]=0;
		lower[i]=0;
	}
}
void arrange()
{
	int i,j=0;
	for(i=0;i<len;i++)
	{
		if(isupper(a[i]))
		{	flag[i]=1;a[i]=a[i]-'A'+1;}
		else if(islower(a[i]))
		{   flag[i]=-1;a[i]=a[i]-'a'+1;}
		else j++;
	}
		if(j==i)
			t=1;
	for (i=0;i<len;i++)
	{
		if(flag[i]==1)
		{
			upper[a[i]]=upper[a[i]]+1;
		}
		else if(flag[i]==-1)
		{
			lower[a[i]]=lower[a[i]]+1;
		}

	


	}

}

void put()
{
	int i,j=0;
	for(i=1;i<=26;i++)
	{
		if(upper[i])
			printf("%c=%d\n",i+'A'-1,upper[i]);
	}
	for(i=1;i<=26;i++)
		if(lower[i])
			printf("%c=%d\n",i-1+'a',lower[i]);
	if(t)
		printf("No");
}
void main()
{
	get();
	arrange();
	put();
}
