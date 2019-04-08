struct student
{
       char name[20];
       int a;
       int b;
       char c1;
       char c2;
       int d;
}stu[100];
int main()
{
    int n,i,p[100]={0},sum=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s",stu[i].name);
    scanf("%d %d %c %c %d",&stu[i].a,&stu[i].b,&stu[i].c1,&stu[i].c2,&stu[i].d);
    }
    for(i=0;i<n;i++)
    {
                          if((stu[i].a>80)&&(stu[i].d>0))
                          p[i]=p[i]+8000;
                          if((stu[i].a>85)&&(stu[i].b>80))
                          p[i]=p[i]+4000;
                          if(stu[i].a>90)
                          p[i]=p[i]+2000;
                          if((stu[i].a>85)&&(stu[i].c2=='Y'))
                          p[i]=p[i]+1000;
                          if((stu[i].b>80)&&(stu[i].c1=='Y'))
                          p[i]=p[i]+850;
                          sum=sum+p[i];
    }
    max=p[0];
 for(i=0;i<n;i++)
 {
                   if(p[i]>max)
                   max=p[i];
 }
 for(i=0;i<n;i++)
 {
                   if(p[i]==max)
                   {
                               printf("%s\n",stu[i].name);
                               printf("%d\n",p[i]);
                               break;
                   }
                   }
                   printf("%d\n",sum);
                   return 0;
 }