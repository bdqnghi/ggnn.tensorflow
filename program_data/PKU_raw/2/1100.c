struct book
{	int id;
	char aut[26];
};

int main()
{
	int m,n,i,j,k;
	int a[27]={0};
	struct book cal[1001];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%s",&cal[i].id,cal[i].aut);
	}
	for(j=65;j<91;j++)
	{	for(i=0;i<m;i++)
		{	for(k=0;k<27;k++)
			{	if(cal[i].aut[k]==j)
					a[j-65]++;
			}
		}
	}
	int max=0,t;
	for(i=0;i<26;i++)
	{
		if(a[i]>max)
		{ max=a[i];
		  t=i;
		}
	}

	printf("%c\n%d\n",t+65,max);
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			if(cal[i].aut[j]==t+65) 
				printf("%d\n",cal[i].id);
		}
	}
	return 0;
}