struct student
{
int num;
int chn;
int math;
int sum;
}stu[100000];
main()
{
      int n,i;
      scanf("%d",&n);
                     for(i=0;i<n;i++)
                     {scanf("%d%d%d",&stu[i].num,&stu[i].math,&stu[i].chn);
                     stu[i].sum=stu[i].math+stu[i].chn;
                     }
    int j,sum[100000],order[4]={n-1},t,m;
    struct student temp;
    for(j=n-1;j>=n-3;j--)
    {      
           for (i=0;i<j;i++)
          {if  (stu[i].sum>=stu[i+1].sum)
               {
                temp=stu[i+1];
                stu[i+1]=stu[i];
                stu[i]=temp;
               }
          }
    }
   printf("%d %d\n",stu[n-1].num,stu[n-1].sum);
   printf("%d %d\n",stu[n-2].num,stu[n-2].sum);
   printf("%d %d\n",stu[n-3].num,stu[n-3].sum);
   getchar();
   getchar();
}
