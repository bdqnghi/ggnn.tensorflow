struct student
{
 char name[20];
 int score;
 int clas;
 char g;
 char x;
 int paper;
 int total; 
}stu[100];
void main()
{
 int i,k,max,n,zong;
 scanf("%d\n",&n);
 for(i=0;i<n;i++)
     {
      scanf("%s %d %d %c %c %d\n",stu[i].name,&stu[i].score,&stu[i].clas,&stu[i].g,&stu[i].x,&stu[i].paper);
      stu[i].total=0;
      if(stu[i].score>80&&stu[i].paper>=1)
        stu[i].total=stu[i].total+8000;
      if(stu[i].score>85&&stu[i].clas>80)
        stu[i].total=stu[i].total+4000;
      if(stu[i].score>90)
        stu[i].total=stu[i].total+2000;
      if(stu[i].score>85&&stu[i].x=='Y')
        stu[i].total=stu[i].total+1000;
      if(stu[i].clas>80&&stu[i].g=='Y')
        stu[i].total=stu[i].total+850;
}
 zong=0;
 max=0;
 for(i=0;i<n;i++)
     {
      zong=zong+stu[i].total;
      if(stu[i].total>max)
         {
          max=stu[i].total;
          k=i;}
      }
 printf("%s\n%d\n%d",stu[k].name,max,zong);
}