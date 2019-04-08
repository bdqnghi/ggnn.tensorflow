int main()
{  
	int n,d,i,j,l;
	struct a
	{
	    char name[27];
	    int c;
	}m[1000];
	struct b
	{
		int num,book[1000];
	    char t;
	};
    struct b author[27];
	for(i=1;i<=26;i++)
	{
	  author[i].t=i+64;
	}
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  scanf("%d",&m[i].c);
	  scanf("%s",m[i].name);
	}
	for(i=1;i<=n;i++)
	{
		  l=strlen(m[i].name);
		for(j=0;j<=l-1;j++)
		{
		   d=m[i].name[j]-64;
		   author[d].num++;
		   author[d].book[author[d].num]=m[i].c;
		}
	}
	for(i=1;i<=25;i++)
	{
	   if(author[i].num>author[i+1].num)
		author[i+1]=author[i];
	}
	printf("%c\n",author[26].t);
	printf("%d\n",author[26].num);
	for(i=1;i<=author[26].num;i++)
	{
	  printf("%d\n",author[26].book[i]);
	}
	return 0;
}
