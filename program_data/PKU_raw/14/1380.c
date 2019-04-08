main()
{
      int i,n,t[3]={0},u[3]={0};
      struct student
      {
        long int ID;
        int math;
        int chinese;
        int a;
      }stu[100000];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
           scanf("%d %d %d",&stu[i].ID,&stu[i].math,&stu[i].chinese);
           stu[i].a=stu[i].math+stu[i].chinese;
      }
      for(i=0;i<n;i++)
      {
         if(stu[i].a>t[0])
         {t[0]=stu[i].a;u[0]=i;}
      }
      for(i=0;i<n;i++)
      {
         if(i==u[0])continue;
         if(stu[i].a>t[1])
         {t[1]=stu[i].a;u[1]=i;}
      }
      for(i=0;i<n;i++)
      {
         if(i==u[0]||i==u[1])continue;
         if(stu[i].a>t[2])
         {t[2]=stu[i].a;u[2]=i;}
      }
      printf("%d %d\n%d %d\n%d %d\n",stu[u[0]].ID,t[0],stu[u[1]].ID,t[1],stu[u[2]].ID,t[2]);
}