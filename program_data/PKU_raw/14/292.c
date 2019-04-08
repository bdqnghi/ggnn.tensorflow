struct student
{
       long int ID;
       int math;
       int chinese;
       int add;
}stu[100000];       
main()
{
      long int n;
      int i,j;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        scanf("%d %d %d",&stu[i].ID,&stu[i].math,&stu[i].chinese);
        stu[i].add=stu[i].math+stu[i].chinese;
      }
      for(i=0;i<3;i++)
      {
         for(j=i+1;j<n;j++)
         {
             if(stu[i].add<stu[j].add)
             {
                 int t=stu[i].add;
                 stu[i].add=stu[j].add;
                 stu[j].add=t;
                 long int m=stu[i].ID;
                 stu[i].ID=stu[j].ID;
                 stu[j].ID=m;
             }
         }
         printf("%d %d\n",stu[i].ID,stu[i].add);
      }
      getchar();
      getchar();
}        