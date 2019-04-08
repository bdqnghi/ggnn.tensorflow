
int  num[1000];
char auth[1000][26];

int main()
{
	int m,i,l;
	scanf("%d",&m);
	char c='A';
	int k=0;
	int a[26];
	for(i=0;i<26;i++)
		a[i]=0;
	for (i=0;i<m;i++)
	{
		scanf("%d",&num[i]);
		scanf("%s",auth[i]);
		int j=0;
		while(auth[i][j]!='\0')
		{
			a[auth[i][j]-64]++;
			j++;
		}
	}
	for(i=0;i<25;i++)
	{
		if (a[i]>k)
		{
			k=a[i];
			c=i+64;
		}
	}
	printf("%c\n%d\n",c,k);

	for(i=0;i<m;i++)
		for(l=0;l<26;l++)
		{
			if(auth[i][l]==c)
				printf("%d\n",num[i]);
		}
	return 0;
}