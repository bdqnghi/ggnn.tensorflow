void main()
{
	struct student
	{int num;
	int score1;
	int score2;
	}stu[100000];
         long int n;
	int i,score[100000],max[3]={0},a[3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d%d%d",&stu[i].num,&stu[i].score1,&stu[i].score2);
        score[i]=stu[i].score1+stu[i].score2;
	}
	for(i=0;i<n;i++)
	{
		if(max[0]<score[i]){max[0]=score[i];a[0]=stu[i].num;}
    }

     for(i=0;i<n;i++)
	 {if(stu[i].num==a[0])continue;
	 else if(max[1]<score[i]){max[1]=score[i];a[1]=stu[i].num;}
	 }

	 for(i=0;i<n;i++)
	 {if(stu[i].num==a[1]||stu[i].num==a[0])continue;
	 else if(max[2]<score[i]){max[2]=score[i];a[2]=stu[i].num;}
	 }
	 for(i=0;i<3;i++)
	 {
		 printf("%d %d\n",a[i],max[i]);
	 }
}