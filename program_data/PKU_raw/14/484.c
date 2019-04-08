     int main()
{
    struct Stu
    {
           int num;
           int sco[2];
           int sum;
    };
   struct Stu stu[5];
   struct Stu temp;
   int i,j,n,m,k;
   scanf("%d",&n);
   if(n>=3)
  {
   for(i=0;i<3;i++)
   {
     scanf("%d%d%d",&stu[i].num,&stu[i].sco[0],&stu[i].sco[1]);
     stu[i].sum=stu[i].sco[0]+stu[i].sco[1];
    }
    for(k=1;k<=n-3;k++)
     {
      scanf("%d%d%d",&stu[3].num,&stu[3].sco[0],&stu[3].sco[1]);
      stu[3].sum=stu[3].sco[0]+stu[3].sco[1];
      m=0;
      for(j=1;j<=2;j++)
      {
        if(stu[m].sum>stu[j].sum||(stu[m].sum==stu[j].sum&&stu[m].num<stu[j].num))
        m=j;
       }
        if(stu[3].sum>stu[m].sum)
        stu[m]=stu[3];
     }
   }
    for(i=0;i<2;i++)
   for(j=i+1;j<3;j++)
   if(stu[i].num>stu[j].num)
   {
     temp=stu[i];
     stu[i]=stu[j];
     stu[j]=temp;
     }
   for(i=0;i<2;i++)
   for(j=i+1;j<3;j++)
   if(stu[i].sum<stu[j].sum)
   {
     temp=stu[i];
     stu[i]=stu[j];
     stu[j]=temp;
     }
    for(i=0;i<3;i++)
    printf("%d %d\n",stu[i].num,stu[i].sum);
    return 0;
}
