 struct student
  {
   char name[20];
   int mark[2];
   char leader;
   char west;
   int paper;
   int money;
  }stu[100];
void main()
{
  int n,i,j,max,sum=0;
  scanf("%d",&n);
  for (i=0;i<n;i++)
     {scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].mark[0],&stu[i].mark[1],
                               &stu[i].leader,&stu[i].west,&stu[i].paper);
      stu[i].money=0;
      if (stu[i].mark[0]>80 && stu[i].paper>=1) stu[i].money+=8000;
      if (stu[i].mark[0]>85 && stu[i].mark[1]>80) stu[i].money+=4000;
      if (stu[i].mark[0]>90) stu[i].money+=2000;
      if (stu[i].mark[0]>85 && stu[i].west=='Y') stu[i].money+=1000;
      if (stu[i].mark[1]>80 && stu[i].leader=='Y') stu[i].money+=850;
      sum+=stu[i].money;
       }
    max=stu[0].money;
  for (i=1;i<n;i++)
      {
       if (stu[i].money>max) {max=stu[i].money;j=i;}
       }
  printf("%s\n%d\n",stu[j].name,stu[j].money);
  printf("%d",sum);
}