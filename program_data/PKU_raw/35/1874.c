main()
{
    int a,b;
	scanf("%d,%d",&a,&b);
	int c[8][8];
	int i,j,k,p,q,t;
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			scanf("%d",&c[i][j]);
	t=0;
    for(i=0;i<a;i++)
	{
        
		for(j=0;j<b;j++)
		{
			p=0;
	        q=0;
			for(k=0;k<b;k++)
				if(c[i][j]<c[i][k])
					p++;
			for(k=0;k<a;k++)
				if(c[k][j]<c[i][j])
					q++;
			if(p==0&&q==0)
			{
				printf("%d+%d",i,j);
			    t++;
			}
		}
		
	}
	if(t==0)
		printf("No");

}