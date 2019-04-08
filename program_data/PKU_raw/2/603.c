
struct book{
	int num;
	char s[27];
};

struct author{
	int num;
	int bn[1000];
};

int main()
{
	int m,i,j,l,max=0;

	char c;

	struct book bk[1000];
	struct author au['Z'+1],t;

	scanf("%d",&m);
  for(j=0;j<'Z'+1;j++)
		au[j].num=0;
	for(i=0;i<m;i++)
	{
		
		scanf("%d %s",&bk[i].num,bk[i].s);
		
		l=strlen(bk[i].s);
	
      
		for(j=0;j<l;j++)
		au[bk[i].s[j]].bn[au[bk[i].s[j]].num++]=bk[i].num;
	}

    
	for(j=0;j<'Z'+1;j++)
		if(au[j].num>max)
		{	t=au[j];
		c=j;
		max=au[j].num;}

	printf("%c\n",c);
	printf("%d\n",t.num);

	for(i=0;i<t.num;i++)
		printf("%d\n",t.bn[i]);

	return 0;
}

