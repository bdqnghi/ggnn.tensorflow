int trans(char k)
{
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i;
	for(i=0;i<26;i++)
	{
		if(k==a[i])
			return i;
	}
}
		

int main ()
{
	int m;
	scanf("%d",&m);
	struct point 
	{
		int id;
		char au[26];
	}books[1000];
	int num[26];
	int i;
	for(i=0;i<26;i++)
	{
		num[i]=0;
	}
    int j;
	for(i=0;i<m;i++)
	{
		scanf("%d%s",&books[i].id,books[i].au);
	}
	for(i=0;i<m;i++)
	{
		int k;
		k=strlen(books[i].au);
		for(j=0;j<k;j++)
		{   int b;
			b=trans(books[i].au[j]);
			num[b]++;
		}
	}
	int max=0;
	int most;
	for(i=0;i<26;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
			most=i;
		}
	}
	char aumost;
	aumost='A'+most;
	printf("%c\n",aumost);
	printf("%d\n",max);
	for(i=0;i<m;i++)
	{
		int k;
		k=strlen(books[i].au);
		for(j=0;j<k;j++)
		{   
			if(books[i].au[j]=='A'+most)
			{ 
				printf("%d\n",books[i].id);
				break;
			}
		}
	}
	return 0;
}
		
		
		
		    

		
