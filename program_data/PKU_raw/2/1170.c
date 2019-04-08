int main()
{   char p=0;
	int m,i,j,max[1000];
	struct book{
		int num;
		char s[27];
	} book[1000];
	memset(max,0,sizeof(max));
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{scanf("%d%s",&book[i].num,book[i].s);}
    for(i=0;i<m;i++)
	{for(j=0;book[i].s[j];j++)
	{ if(++max[book[i].s[j]]>max[p])
	p=book[i].s[j];
	}}
	printf("%c\n%d\n",p,max[p]);
	for(i=0;i<m;i++)
	{if(strchr(book[i].s,p))
	printf("%d\n",book[i].num);}

		return 0;
}