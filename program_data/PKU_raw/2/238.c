struct
{
	int no;
	char wr[26];
}book[999];
struct
{
	char name;
	int num;
	int book[999];
}a[26];



int main()
{
	int n,m,t,k,d;
	int all=0;
	for (t=0;t<26;t++) 
	{
		a[t].name='A'+t;
		a[t].num=0;
	}
	scanf("%d",&m);
	for (t=0;t<m;t++)
	{
		scanf("%d %s",&book[t].no,book[t].wr);
	}

	for (t=0;t<m;t++)
	{
		k=strlen(book[t].wr);
		for(n=0;n<k;n++)
		{
			for(d=0;d<26;d++)
			{
				if (a[d].name==book[t].wr[n])
				{
					a[d].book[a[d].num]=book[t].no;
					a[d].num++;
					break;
				}
			}
		}
	}
	k=0;
	

	for (t=0;t<26;t++)
	{
		if (k<a[t].num)
            k=a[t].num;
	}


	for (t=0;;t++)
	{
		if (k==a[t].num) 
		{
			printf("%c",a[t].name);
			printf("\n%d",a[t].num);
			for (d=0;d<a[t].num;d++)
			printf("\n%d",a[t].book[d]);
			break;
		}
	}
}