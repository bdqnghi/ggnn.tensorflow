int main()
{
     struct student
    {
           char name[21];
           int final;
           int cla;
           char l;
           char w;
           int paper;
           int total;
    };
    int k,i,t,max;
    t=max=0;
    struct student stu[100];
    scanf("%d",&k);
    for(i=0;i<=k-1;i++)
    {
                       scanf("%s %d%d %c %c %d",stu[i].name,&stu[i].final,&stu[i].cla,&stu[i].l,&stu[i].w,&stu[i].paper);
                       stu[i].total=0;
                       if(stu[i].final>80&&stu[i].paper>=1) stu[i].total=stu[i].total+8000;
                       if(stu[i].final>85&&stu[i].cla>80) stu[i].total=stu[i].total+4000;
                       if(stu[i].final>90) stu[i].total=stu[i].total+2000;
                       if(stu[i].final>85&&stu[i].w=='Y') stu[i].total=stu[i].total+1000;
                       if(stu[i].cla>80&&(stu[i].l=='Y')) stu[i].total=stu[i].total+850;
    }
    for(i=0;i<=k-1;i++)
    {
                       if(stu[i].total>max)
                       max=stu[i].total;
                       t=t+stu[i].total;
    }
    for(i=0;i<=k-1;i++)
    {
                       if(stu[i].total==max)
                       {
                       printf("%s\n",stu[i].name);
                       printf("%d\n",stu[i].total);
                       break;
                       }
    }
    printf("%d\n",t);
return 0;
}