int main()
{
	int b,c,i,j,m,t,p;
	int a[100][100];
	scanf("%d%d",&b,&c);
	for(i=0;i<=b-1;i++)
	{
		for(j=0;j<=c-1;j++)
		scanf("%d",&a[i][j]);
	}
	for(m=0;m<=b+c-2;m++)
	{
	    if(m<b&&m<c)
	    {
	        for(i=0;i<=m;i++)
	        printf("%d\n",a[i][m-i]);
	    }
	    else if(m>=b&&m>=c)
	    {
	        for(i=m-c+1;i<=b-1;i++)
	        printf("%d\n",a[i][m-i]);
	    }
	    else
	    {
	        if(b<c)
	        {
	            for(i=0;i<=b-1;i++)
	        printf("%d\n",a[i][m-i]);

	        }
	        else
	        {
	            for(i=m-c+1;i<=m;i++)
                printf("%d\n",a[i][m-i]);
            }
	    }
	}
	return 0;
}
