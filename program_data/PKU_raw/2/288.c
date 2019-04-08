int main()
{
	struct tushu
	{
		int bianhao;
		char zuozhe[26];
	};
	int i,j,n,q=0;
	int count[26]={0};
	scanf("%d",&n);
	struct tushu *pp;
	pp=(struct tushu *)malloc(sizeof(tushu)*n);
	int *m;
	m=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&((pp+i)->bianhao),(pp+i)->zuozhe);
	}
	for(i=0;i<n;i++)
	{
		m[i]=strlen(pp[i].zuozhe);
		for(j=0;j<m[i];j++)
		{
			count[pp[i].zuozhe[j]-'A']++;
		}
	}
	int max=0;
	for(i=0;i<26;i++)
	{
		if(count[i]>max){max=count[i];q=i;}
	}
	printf("%c\n%d\n",'A'+q,max);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m[i];j++)
		{
			if(pp[i].zuozhe[j]==('A'+q))printf("%d\n",pp[i].bianhao);
		}
	}

	return 0;
}


	
