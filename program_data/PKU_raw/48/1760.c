main()
{
    int i,j,k,l,m,n,x;
    int b[11][11]={0};
    int c[11][11]={0};
    scanf("%d %d",&x,&m);
    c[5][5]=x;
    for(n=1;n<=m;n++)
    {
        	for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			b[i][j]=c[i][j];
		}
        for(i=5-n;i<=5+n;i++)
        {
            for(j=5-n;j<=5+n;j++)
            {
                for(k=-1;k<=1;k++)
                {
                    for(l=-1;l<=1;l++)
                    {
                        c[i][j]=c[i][j]+b[i-l][j-k];
                    }
                }
            }
        }
    }
     for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j==1)
            {printf("%d",c[i][j]);}
            else
            {printf(" %d",c[i][j]);}
        }
        printf("\n");
    }
}
    
