void main()
{
	char str[50][10]={0},substr[50][3]={0},a[50][13]={0},max[50]={0},c[50][14]={0};
	int len[50],i,n,j,num[50],k,cl[50];
	for(i=0;;i++)
	{
		gets(c[i]);
	    cl[i]=strlen(c[i]);
		if(cl[i]==0)
			break;
		for(j=0;j<cl[i];j++)
		{
			if(c[i][j]!=' ')
            {str[i][j]=c[i][j];}
			else
			{
				k=j;break;
			}
		}
		for(j=k+1;j<cl[i];j++)
		{
			substr[i][j-k-1]=c[i][j];
		}
	}
	n=i;
	for(i=0;i<n;i++)
	{
		len[i]=strlen(str[i]);
		for(j=0,max[i]=str[i][0];j<len[i];j++)
		{
			if(str[i][j]>max[i])
			{	max[i]=str[i][j];num[i]=j;}
		}
		for(j=0;j<(len[i]+3);j++)
		{
			k=j-num[i]-1;
			if(j<=num[i])
			{a[i][j]=str[i][j];}
			else
			{
                if(j<=(num[i]+3))
				{a[i][j]=substr[i][k];}
				else
				{a[i][j]=str[i][j-3];}
			}
		}
		printf("%s\n",a[i]);
	}
}