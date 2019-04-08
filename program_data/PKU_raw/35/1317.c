main()
{
    int a[8][8],i,j,m,n,max,b,q=0,f=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		max=a[i][0];
                b=0;
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{max=a[i][j];b=j;}
		}
      for(j=0;j<m;j++)
                {
                   if(max>a[j][b])
		    q=1;
                }
                  
                    if(q==0)
                   {  printf("%d+%d",i,b);
					f=1;}
         }
                    if(f==0)
                    {
                          printf("No\n");
                         }
              return 0;
}