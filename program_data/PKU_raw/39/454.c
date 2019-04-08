int main()
{
    int n,i,max=0,sum=0,t;
    scanf("%d",&n);
    struct student
    {
       char name[20];
       int ascore;
       int bscore;
       char good;
       char west;
       int work;
       int money;
     }stu[100];
	 for(i=0;i<n;i++)
		 stu[i].money=0;
     for(i=0;i<n;i++)
     {
         scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].ascore,&stu[i].bscore,&stu[i].good,&stu[i].west,&stu[i].work);
      }
      i=0;
      for(i=0;i<n;i++)
      {
          if(stu[i].ascore>80&&stu[i].work>=1)
          stu[i].money=stu[i].money+8000;
          if(stu[i].ascore>85&&stu[i].bscore>80)
          stu[i].money=stu[i].money+4000;
          if(stu[i].ascore>90)
          stu[i].money=stu[i].money+2000;
          if(stu[i].ascore>85&&stu[i].west=='Y')
          stu[i].money=stu[i].money+1000;
          if(stu[i].bscore>80&&stu[i].good=='Y')
          stu[i].money=stu[i].money+850;
      }
      for(i=0;i<n;i++)
      sum=sum+stu[i].money;
      i=0;
      for(i=0;i<n-1;i++)
      {
         if(stu[i].money>max)
          {
              max=stu[i].money;
              t=i;
           }
       }
       printf("%s\n%d\n%d\n",stu[t].name,stu[t].money,sum);
}      
