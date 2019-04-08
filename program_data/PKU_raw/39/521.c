
struct student
{
       char name[40];
       int end;
       int cls;
       int lead;
       int west;
       int paper;
       int money;
} stu[100];

int main()
{
    int i,n,t=1,sum=0,max=0,print;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].end,&stu[i].cls,&stu[i].lead,&stu[i].west,&stu[i].paper);
    }

    for(i=1;i<=n;i++)
    {
                     if(stu[i].end>80&&stu[i].paper>=1) stu[i].money+=8000;
                     if(stu[i].end>85&&stu[i].cls>80) stu[i].money+=4000;
                     if(stu[i].end>90) stu[i].money+=2000;
                     if(stu[i].end>85&&stu[i].west==89) stu[i].money+=1000;
                     if(stu[i].cls>80&&stu[i].lead==89) stu[i].money+=850;
                     sum+=stu[i].money;
    }
    for(i=1;i<=n;i++)
    {
                    if(stu[i].money>max) 
                    {
                                         max=stu[i].money;
                                         print=i;
                    }
    }

printf("%s\n%d\n%d",stu[print].name,stu[print].money,sum);

    return 0;
}