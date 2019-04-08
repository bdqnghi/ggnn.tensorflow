struct book
{
	int mark;
	char name[26];
};
int main()
{
    int m,h,i,j,k,max,length;
	int t[26];
	char a;
	scanf("%d",&m);
    struct book book[1000];
	for(i=0;i<m;i++)
	{
		scanf("%d%s",&book[i].mark,book[i].name);
	}
	for(i=0;i<26;i++)
	{
	    a='A'+i;
		t[i]=0;
		for(j=0;j<m;j++)
		{
		    length=strlen(book[i].name);

			for(h=0;h<26;h++)
			if(a==book[j].name[h])
			{
			    t[i]++;

			}

		}
	}
	max=0;
	for(i=0;i<26;i++)
	{
		if(t[i]>max)
		{
			max=t[i];
			k=i;
		}
	}
	a='A'+k;
	printf("%c\n%d\n",a,t[k]);
	for(i=0;i<m;i++)
	{
		length=strlen(book[i].name);
		for(j=0;j<26;j++)
		{
			if('A'+k==book[i].name[j])
				printf("%d\n",book[i].mark);
		}
	}
    return 0;
}
