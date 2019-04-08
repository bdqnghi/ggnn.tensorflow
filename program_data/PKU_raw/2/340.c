struct book
{
	int num;
	char name[26];
};
struct name
{
	char na;
	int n;
};
void main()
{
	int n,i,j,k,s,max=0;
	struct book a[1000];
	struct name b[26];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d%s",&a[i].num,a[i].name);
	}
	for(i=0;i<=25;i++)
	{
		b[i].na='A'+i;
		for(j=0,s=0;j<=n-1;j++)
		{
			for(k=0;k<=strlen(a[j].name)-1;k++)
			{
				if(b[i].na==a[j].name[k])
				{
					s++;
					break;
				}
			}
		}
		b[i].n=s;
	}
	for(i=0;i<=25;i++)
	{
		if(b[i].n>max)
		{
			max=b[i].n;
		}
	}
	
	for(i=0;i<=25;i++)
	{
		if(b[i].n==max)
		{
			printf("%c\n%d\n",b[i].na,b[i].n);
		for(j=0;j<=n-1;j++)
			{
				for(k=0;k<=strlen(a[j].name)-1;k++)
				{
					if(b[i].na==a[j].name[k])
					{
						printf("%d\n",a[j].num);
						break;
					}
				}
			}
		}
	}
}







	
