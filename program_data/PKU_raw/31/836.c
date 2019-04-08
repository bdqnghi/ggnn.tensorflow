main()
{
      int i,j,k,n,m;
      struct student
      {
            char num[200];
            char name[200];
            char sex;
            int age;
            char score[20];
            char add[500]; 
             }stu[1000];
             i=0;
            while(1)
            {
                    scanf("%s",stu[i].num);
                    if(strcmp(stu[i].num,"end")==0)
                                 break;
      scanf("%s %c %d %s %s",stu[i].name,&stu[i].sex,&stu[i].age,stu[i].score,stu[i].add);
                                 i++;
                                 }
      for(j=i-1;j>=0;j--)
      {
      printf("%s %s %c %d %s %s\n",stu[j].num,stu[j].name,stu[j].sex,stu[j].age,stu[j].score,stu[j].add);
                         }
      
   
      
           }