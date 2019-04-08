void main()
{
 int i,j,n,k;
 struct student
 {
  int num;
  int score1;
  int score2;
  int t;
 }stu[100000],m1,m2,m3;
 scanf("%d\n",&n);
 for(i=0;i<n;i++)
     {
      scanf("%d %d %d\n",&stu[i].num,&stu[i].score1,&stu[i].score2);
      stu[i].t=stu[i].score1+stu[i].score2;     
     }
 m1=stu[0];
 m2=stu[0];
 m3=stu[0];
 for(i=0;i<n;i++)
        {
         if(stu[i].t>m1.t)
            {
             m3=m2;
             m2=m1;
             m1=stu[i];
            }
        else if(stu[i].t>m2.t&&stu[i].t<=m1.t)
            {
             m3=m2;
             m2=stu[i];
            }
        else if(stu[i].t>m3.t&&stu[i].t<=m2.t)
            {
             m3=stu[i];
            }
        }
   printf("%d %d\n%d %d\n%d %d",m1.num,m1.t,m2.num,m2.t,m3.num,m3.t);
     
}


