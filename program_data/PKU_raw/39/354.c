 struct student
 {
 	char name[20];
 	int qm,py,gb,xb;
 	int paper;
 	int sum;
 	
 }stu[100];
 void main()
 {
 	int n,i,k,max,s=0;
 	scanf("%d\n",&n);
 	
       for(i=0;i<n;i++)
 	{
 		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qm,&stu[i].py,&stu[i].gb,&stu[i].xb,&stu[i].paper);
        stu[i].sum=0;
 	}
 	for(i=0;i<n;i++)
 	{
 		if( stu[i].qm>80&& stu[i].paper>=1)
		 stu[i].sum=stu[i].sum+8000; 
	       if(stu[i].qm>85&&stu[i].py>80)
		 stu[i].sum=stu[i].sum+4000;
               if(stu[i].qm>90)
                 stu[i].sum=stu[i].sum+2000;
               if(stu[i].qm>85&&stu[i].xb=='Y')
                  stu[i].sum=stu[i].sum+1000;
               if(stu[i].py>80&&stu[i].gb=='Y')
                 stu[i].sum=stu[i].sum+850;
               s=s+stu[i].sum;
 	}
      max=stu[0].sum;
      for(i=0;i<n;i++)
         if(max<stu[i+1].sum)
         max=stu[i+1].sum;
      for(i=0;i<n;i++)
        {
           if(stu[i].sum==max)
            {
                printf("%s\n%d\n%d",stu[i].name,max,s);break;
            }
         }
 }
