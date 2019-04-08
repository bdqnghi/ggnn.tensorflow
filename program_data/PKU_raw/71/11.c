void main()
{
	int x,l;
	scanf("%d",&x);
	
	int m1[12]={31,28,31,30,31,30,31,31,30,31,30};
	int m2[12]={31,29,31,30,31,30,31,31,30,31,30};
	long int y;
	int i,j,sum1=0,sum2=0,m,d,mm;
	for(l=0;l<x;l++)
	{
		sum1=sum2=0;
	scanf("%ld %d %d",&y,&m,&mm);
	   if ((y%4==0&&y%100!=0)||(y%400==0))
	   {
		for (i=0;i<m-1;i++)
			sum1+=m2[i];
		for (i=0;i<mm-1;i++)
			sum2+=m2[i];
	   }
	 else
	 {
		for (i=0;i<m-1;i++)
			sum1+=m1[i];
		for (i=0;i<mm-1;i++)
			sum2+=m1[i];
	 }
    y=y-1;
	sum1=sum1+y+y/4-y/100+y/400;
	sum2=sum2+y+y/4-y/100+y/400;
	j=(sum2-sum1)%7;
	
       if(j==0)
	  	printf("YES\n");
	  else
		printf("NO\n");
	}

	
}

