int main()
{
	int n,i;
	char wri[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int num[26];//?????????
	char tem[100];
	int j=0,k;
	int shu[26][100];//?????
	int hao;//??
	for(i=0;i<26;i++)
		num[i]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&hao,tem);
		j=0;
		while(tem[j]!='\0')
		{
			for(k=0;k<=25;k++)
			{
				if(wri[k]==tem[j])
				{
					shu[k][num[k]]=hao;
					num[k]++;
				}
			}
			j++;
		}
	}
	int max=0;
	for(i=1;i<26;i++)
	{
		if(num[i]>num[max])
			max=i;
	}
	printf("%c\n%d\n",wri[max],num[max]);
	for(i=0;i<num[max];i++)
		printf("%d\n",shu[max][i]);
	return 0;
}
