main()
{
	int i,k,r,N;
	int a1[250],b1[250],c[250];
	char a[250],b[250];
    scanf("%d",&N);
   	for (i=1;i<=N;i++)
	{
		
	    for (k=0;k<250;k++)
		{
			a[k]=0;
			b[k]=0;
			a1[k]=0;
			b1[k]=0;
			c[k]=0;
     	}
		scanf("%s%s",a,b);
		for (k=249;k>=0;k--)
		if  (a[k]>='0'&&a[k]<='9')
				a1[k+250-strlen(a)]=a[k]-'0';
		for (k=249;k>=0;k--)
		if  (b[k]>='0'&&b[k]<='9')
				b1[k+250-strlen(b)]=b[k]-'0';
		/*for (k=0;k<250;k++)
			printf("%d",a1[k]);
		printf("\n");
        for (k=0;k<250;k++)
			printf("%d",b1[k]);
		printf("\n");*/
		for (k=249;k>=0;k--)
		{
			if (a1[k]<b1[k])
			{
				a1[k]+=10;
			    a1[k-1]--;
			}
			c[k]=a1[k]-b1[k];
		}
		r=0;
        while(c[r]<=0&&r<250)
			r++;
		if (r==250)
			printf("0");
        for (k=r;k<250;k++)
        printf("%d",c[k]);
		printf("\n");
	}
	
}
