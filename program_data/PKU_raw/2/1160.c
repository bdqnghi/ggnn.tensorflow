int alpha[26]={0};
struct library
{
	int num;
	char authors[27];
}books[999];
void addauthor(char string[])
{
	int i=0;
	do
	{ alpha[string[i]-'A']++;
	i++;
	}
	while(string[i]!='\0');
}
void hewroteit(struct library book,int maxalpha)
{
	int i;
	for(i=0;book.authors[i]!='\0';i++)
	{
		if(book.authors[i]-'A'==maxalpha)
		{
			printf("%d\n",book.num);
			break;
		}
	}
}
int main()
{
	int m;
	scanf("%d",&m);
	int i;
	for(i=0;i<m;i++)
		scanf("%d %s",&books[i].num,books[i].authors);
	for(i=0;i<m;i++)
		addauthor(books[i].authors);
	int max=0,maxalpha=0;
	for(i=0;i<26;i++)
	{
		if (alpha[i]>max)
		{
			max=alpha[i];
			maxalpha=i;
		}
	}
	printf("%c\n%d\n",'A'+maxalpha,max);
	for(i=0;i<m;i++)
	{
		hewroteit(books[i],maxalpha);
	}
	return 0;
}
	


