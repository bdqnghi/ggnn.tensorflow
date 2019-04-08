int  main()
{
    int i=2,j=2,q,m=0,n=0,a[10000];
	scanf("%d",&q);
        if(q<5)
		printf("empty\n");
        else
	{
			for(i=2;i<=q;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j!=0)
			{
				continue;
			}
			else
            {
				break;
			}
		}
		if(j==i)
		{
			a[n++]=i;
          }
         }
       for(i=0;i<n-1;i++)
	   {
              if((a[i+1]-a[i])==2)
                {
                        m=m+1;
                      printf("%d %d\n",a[i],a[i+1]);
                }
       }
}

		return 0;
}