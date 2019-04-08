struct book
	{
		char id[11];
		char name[30];
	};
struct au
{
	int num;
	char id[1000][11];
};
void main()
{
	struct book b;
	struct au a[26];
	int n,i,j=0,k;
	char c;
	for(i=0;i<26;i++)
		a[i].num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",b.id,b.name);
		while(b.name[j]!='\0')
		{
			k=b.name[j]-'A';
			strcpy(a[k].id[a[k].num],b.id);
			a[k].num++;
			j++;
		}
		j=0;
	}
	k=0;
	j=0;
	for(i=0;i<26;i++)
	{
		j=(a[i].num>k)? i:j;
		k=(a[i].num>k)? a[i].num:k;
	}
	printf("%c\n",'A'+j);
	printf("%d\n",k);
	for(i=0;i<k;i++)
		printf("%s\n",a[j].id[i]);
}