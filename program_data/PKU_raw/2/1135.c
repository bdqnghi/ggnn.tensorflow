
int main()
{
	int m,i,j;
	scanf("%d",&m);

	struct Bookinfo
	{
		int number;
		char auther[27];
	};

	struct Bookinfo a[1000];
	for (i=0;i<m;i++)
		scanf("%d %s",&a[i].number,a[i].auther);

	struct Author
	{
		int count;
		int number[1000];
	};

	struct Author b[26];
	for(i=0;i<26;i++) b[i].count=0;
	int max,record;

	for (i=0;i<m;i++)
	{
		int k;
		k=strlen(a[i].auther);
		for (j=0;j<k;j++)
		{
			b[a[i].auther[j]-'A'].number[b[a[i].auther[j]-'A'].count]=a[i].number;
			b[a[i].auther[j]-'A'].count++;
		}
	}

	max=b[0].count;
	for (i=0;i<26;i++)
		if (b[i].count>=max) 
		{
			max=b[i].count;
			record=i;
		}
	printf("%c\n%d\n",record+'A',max);
	for (i=0;i<max;i++)
		printf("%d\n",b[record].number[i]);
	return 0;
}