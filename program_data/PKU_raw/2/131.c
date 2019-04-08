struct book
{
	int id;
	char author[26];
};
int main()
{
	struct book b[999]; 
	int a[26];
	int m,i,j,max,maxauthor;
	char c;
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		scanf("%d %s",&b[i].id,b[i].author);
	}
	for (i=0;i<26;i++)
	{
		a[i]=0;
	}
	for (i=0;i<m;i++)
	{
		for (j=0;b[i].author[j]!='\0';j++)
		{
			c=b[i].author[j];
			a[c-65]++;
		}
	}
	max=a[0];
	maxauthor=0;
	for (i=1;i<26;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
			maxauthor=i;
		}
	}
	printf("%c\n%d\n",maxauthor+65,max);
	for (i=0;i<m;i++)
	{
		for (j=0;b[i].author[j]!='\0';j++)
		{
			c=b[i].author[j];
			if (c==maxauthor+65)
			{
				printf("%d\n",b[i].id);
				break;
			}
		}
	}
	return 0;
}