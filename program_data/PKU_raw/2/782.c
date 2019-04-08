
void main()
{
	int i,j,m,a[26][999],num[26]={0},t,max;
	char zz[27];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%s",&t,zz);
		for(j=0;j<strlen(zz);j++)
		{
			a[(int)(zz[j]-'A')][num[(int)(zz[j]-'A')]]=t;
			num[(int)(zz[j]-'A')]++;
		}
	}
	max=0;
	for(i=0;i<26;i++)
	{
		if(num[i]>num[max])
			max=i;
	}
	printf("%c\n%d\n",max+'A',num[max]);
	for(i=0;i<num[max];i++)
		printf("%d\n",a[max][i]);

}