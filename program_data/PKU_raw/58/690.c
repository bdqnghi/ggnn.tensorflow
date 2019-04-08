int main()
{
	int n,j,i,flag[100];
	char zf[100][100],shuzi[100];
	gets(shuzi);
	n=atoi(shuzi);
	for(i=0;i<n;i++)
	{
		flag[i]=1;
		gets(zf[i]);
	}
	for(i=0;i<n;i++)
	{
		if((zf[i][0]<'A')||((zf[i][0]>'Z')&&(zf[i][0]<'a')&&(zf[i][0]!='_'))||(zf[i][0]>'z'))
		{
			flag[i]=0;
		}
		for(j=1;j<strlen(zf[i]);j++)
		{
		if((zf[i][j]<'0')||(zf[i][j]<'A'&&zf[i][j]>'9')||((zf[i][j]>'Z')&&(zf[i][j]<'a')&&(zf[i][j]!='_'))||(zf[i][j]>'z'))
		    {
			    flag[i]=0;
		    }
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",flag[i]);
	}
	return 0;
}