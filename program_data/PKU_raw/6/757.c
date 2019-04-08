int main()
{
	int i,j,k,l,s[100][100],n[100],m[100],num[100];
	int num1[100]={0};
	int num2[100]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&n[i],&m[i]);
		for(j=0;j<n[i];j++)
		{
			for(l=0;l<m[i];l++)
			{
				scanf("%d",&s[j][l]);
				num1[i]+=s[j][l];
			}
		}
		for(j=1;j<n[i]-1;j++)
		{
			for(l=1;l<m[i]-1;l++)
			{
				num2[i]+=s[j][l];
			}
		}
		num[i]=num1[i]-num2[i];

	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",num[i]);
	}




return 0;
}

