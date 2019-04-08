main()
{
	int n,a[300]={0},i,h=0,l,j,r,x,y,max;
    char c[500];
	scanf("%s",c);
    l=strlen(c);
	c[l]='0';

	for (i=0;i<l;i++)
	{
		if (c[i]>='0' && c[i]<='9')
		{	a[h]=c[i]-'0';
			
		for (j=i+1;(c[j]>='0' && c[j]<='9');j++)
                 a[h]=a[h]*10+c[j]-'0';
			 //printf("%d  %d,",h,a[h]);
			 h++;
			 
			 i=j;
		}
	}
    a[h-1]=a[h-1]/10;

	x=0;
    if (a[1]==0)
	{printf("No");
	x=1;}
	
	
	y=0;
    
	if (x==0)
	{ 
		
	 r=0;
		max=a[0];
        for (i=0;i<h;i++)
       if (a[i]!=a[0])
		   r=1;
        if (r==0)
		{printf("No");y=1;}
	}


	
	
	
	
	if (x==0 && y==0)
	{
		max=a[0];

		// printf("%d\n",max);
	 
		 for (i=0;i<h;i++)
        if ( a[i]>max )
	     max=a[i];


    // printf("%d\n",max);


    
     for (i=0;i<h;i++)
      if (a[i]==max)
		  a[i]=0;
     

	max=a[0];
	for (i=0;i<h;i++)
        if (a[i]>max)
	max=a[i];

	//printf("%d\n",max);


		printf("%d",max);
	}
}
		