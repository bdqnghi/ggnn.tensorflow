void main()
{
	int n,i,j,k,t,yuanshi,wusi,chengji,xibu,banji;long sum=0;

	struct st{  
	        	   char name[23];
		            int score;
	                int essay;
	                int pingyi;
					char area;
                    char position;
					int money;
	} stu[103];
	struct st s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].score,
	&stu[i].pingyi,&stu[i].position,&stu[i].area,&stu[i].essay);
		for(i=0;i<n;i++)
		{
        yuanshi=0;
		wusi=0;
		chengji=0;
		xibu=0;
		banji=0;
			if(stu[i].score>80&&stu[i].essay>0)
				yuanshi=8000;
	       if(stu[i].score>85&&stu[i].pingyi>80)
			   wusi=4000;
		   if(stu[i].score>90)
			   chengji=2000;
		   if(stu[i].score>85&&stu[i].area=='Y')
			  xibu=1000;
		   if(stu[i].pingyi>80&&stu[i].position=='Y')
			   banji=850;
	       stu[i].money=yuanshi+wusi+chengji+xibu+banji;
		}
		
		for(i=0,sum=0;i<n;i++)
			sum=sum+stu[i].money;
		for(i=0;i<n;i++)
			for(j=0;j<n-i;j++)
				if(stu[i].money>stu[j].money)
				{
					s=stu[i];stu[i]=stu[j];stu[j]=s;
				}
    printf("%s\n%d\n%ld\n",stu[0].name,stu[0].money,sum);	
	
	
}
