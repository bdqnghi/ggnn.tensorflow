
int main()
{
    struct student
    {
        char name[20];
        int final;
        int com;
        char offi;
        char west;
        int arc;
    };
    struct student stu[200];
    struct student chan;
    int i,n;
    int total[200]={0},all=0;
    int a,b,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].final,&stu[i].com,&stu[i].offi,&stu[i].west,&stu[i].arc);
    }
    for(i=0;i<n;i++)
    {
        if((stu[i].final>80)&&(stu[i].arc>0))
        total[i]=total[i]+8000;
        if((stu[i].final>85)&&(stu[i].com>80))
        total[i]=total[i]+4000;
        if(stu[i].final>90)
        total[i]=total[i]+2000;
        if((stu[i].final>85)&&(stu[i].west==89))
        total[i]=total[i]+1000;
        if((stu[i].com>80)&&(stu[i].offi==89))
        total[i]=total[i]+850;
    }
    for(a=0;a<n-1;a++)
    {
        for(b=0;b<n-1-a;b++)
        {
            if(total[b]<total[b+1])
            {
                temp=total[b];
                total[b]=total[b+1];
                total[b+1]=temp;
                chan=stu[b];
                stu[b]=stu[b+1];
                stu[b+1]=chan;
            }
        }
    }
    for(i=0;i<n;i++)
    all=all+total[i];
    printf("%s\n%d\n%d\n",stu[0].name,total[0],all);
    return 0;
}
