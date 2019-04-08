struct cs
{
	int b;
	char a[26];
};
int main()
{
	int m,i,j,k,max=0;
	int c[200][1000],count[200]={0};
	struct cs x[1000];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&x[i].b);
		gets(x[i].a);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<strlen(x[i].a);j++)
		{
			for(k=65;k<91;k++)
			{
				if(x[i].a[j]==k)
				{count[k]++;
				c[k][count[k]]=x[i].b;
				}
			}
		}
	}
	for(k=65;k<91;k++)
	{
		if(count[k]>max)
			max=count[k];
	}
	for(k=65;k<91;k++)
	{
		if(count[k]==max)
		{
			printf("%c\n%d\n",k,count[k]);
			for(j=1;j<=max;j++)
			{
				printf("%d\n",c[k][j]);
			}
		}
	}
	return 0;
}