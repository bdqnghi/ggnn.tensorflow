struct student
{
	char num[6];
	int score[2];
	int sum;
} stu[100000];

void main()
{
	long n,i,j,maxi1,maxi2,maxi3;
         int max1=0,max2=0,max3=0;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].num);
		for(j=0;j<2;j++)
			scanf("%d",&stu[i].score[j]);
	}
      for(i=0;i<n;i++)
	  stu[i].sum=stu[i].score[0]+stu[i].score[1];
    
      for(i=0;i<n;i++)
        if(stu[i].sum>max1)
          {max1=stu[i].sum;
           maxi1=i;
          }
      stu[maxi1].sum=0;
      for(i=0;i<n;i++)
         if(stu[i].sum>max2)
           {max2=stu[i].sum;
            maxi2=i;
           }
	  stu[maxi2].sum=0;
      for(i=0;i<n;i++)
         if(stu[i].sum>max3)
           {max3=stu[i].sum;
            maxi3=i;
           }	    
     printf("%s %d\n%s %d\n%s %d",stu[maxi1].num,max1,stu[maxi2].num,max2,stu[maxi3].num,max3);
}
