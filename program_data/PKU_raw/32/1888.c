void main()
{
	int n,i,j;
	int len1,len2;
	char num[2][100],emp[1];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%s",num[0],num[1]);
		len1=strlen(num[0]);
		len2=strlen(num[1]);
		for(j=0;j<len2;j++)
		{
			if(num[0][len1-1-j]>=num[1][len2-1-j])
				num[0][len1-1-j]=num[0][len1-1-j]-num[1][len2-1-j]+'0';
			else
			{
				num[0][len1-1-j]=num[0][len1-1-j]+10-num[1][len2-1-j]+'0';
				num[0][len1-2-j]=num[0][len1-2-j]-1;
			}
		}
		puts(num[0]);
		gets(emp);
	}
}