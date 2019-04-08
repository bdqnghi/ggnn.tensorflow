int main ()
{
	int a[50][16],b[50],c[50],i,j,m,n,o,line,num=0;
	for(i=0;i<=49;i++)
	{
		for(j=0;j<=15;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0||a[i][j]==-1)
			{
				b[i]=j-1;
				c[i]=0;
				break;
			}
		}
		if(a[i][0]==-1)
			break;
		line=i;
	}
	for(m=0;m<=line;m++)
	{
		for(n=0;n<=b[m];n++)
		{
			for(o=0;o<=b[m];o++)
			{
				if(a[m][n]==2*a[m][o])
					c[m]=c[m]+1;
			}
		}
		printf("%d\n",c[m]);
	}
	return 0;
}
	



