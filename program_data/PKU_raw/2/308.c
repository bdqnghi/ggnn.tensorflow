struct shu
{
	int bianhao;
	char name[26];
}shu[999];

int main ()
{
	int m;
	scanf("%d",&m);
	int i,j,k;
	int jishu[26]={0};
	int beiyong[26];
	for (i=0;i<m;i++)
		scanf("%d %s",&shu[i].bianhao,shu[i].name);
    for (i=0;i<26;i++)
	{
		for (j=0;j<m;j++)
		{
			for (k=0;k<26;k++)
			{
				if (shu[j].name[k]==i+'A')
					jishu[i]++;
			}
		}
	}
	for (i=0;i<26;i++)
		beiyong[i]=jishu[i];
	int max=0;
	for (i=0;i<26;i++)
	{
		if (beiyong[i]>max)
			max=beiyong[i];
	}
	int t;
	for (i=0;i<26;i++)
	{
		if (jishu[i]==max)
			t=i;
	}
	printf("%c\n",t+'A');
	printf("%d\n",max);
	for (i=0;i<m;i++)
	{
		for (j=0;j<26;j++)
		{
			if (shu[i].name[j]==t+'A')
				printf("%d\n",shu[i].bianhao);
		}
	}
}