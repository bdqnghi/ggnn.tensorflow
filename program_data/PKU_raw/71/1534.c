main()
{ 
	int n,i,j,y,m1,m2,temp,sum=0;
	int run(int x);
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{		scanf("%d%d%d",&y,&m1,&m2);
			
			if(run(y)==1)
			day[1]=29;
			else
			day[1]=28;
			
			if(m1>m2)
			{temp =m1;
			m1=m2;
			m2=temp;}
			for(j=m1-1;j<m2-1;j++)
			sum=sum+day[j];
			
			if(sum%7==0)
			printf("YES\n");
			else
			printf("NO\n");
			
			sum=0;
			temp=0;
	 								
									 
									 
									 }
		 
			 }
int run(int x)
{
 		if(x%4==0)
		{		if(x%100==0)
				{		if(x%400==0)
						return 1;
			 			else return 0;
		 						 }
		else return 1;		 					
							 } 		
		else return 0; 
		 
		 
		 }
