struct shu
{ 
	int num;
	char author_name[27];
};

int main()
{
	int ere[26];
	int m,i,max=0,key;
	for(i=0;i<26;i++)
	{
		ere[i]=0;
	}
	char *a;
	struct shu book[999];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&book[i].num);
		scanf("%s",book[i].author_name);
	}
	for(i=0;i<m;i++)
	{
		a=book[i].author_name;
		while(*a!='\0')
		{
			ere[(*a)-'A']++;
			a++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(ere[i]>=max)
		{
			max=ere[i];
			key=i;
		}
	}
	printf("%c\n",(key+'A'));
	printf("%d\n",ere[key]);
	for(i=0;i<m;i++)
	{
		a=book[i].author_name;
		while(*a!='\0')
		{
			if((key+'A')==*a)
			{
				printf("%d\n",book[i].num);
				break;
			}
			a++;
		}
	}
	return 0;
}

