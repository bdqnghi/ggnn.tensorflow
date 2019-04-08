int main()
{
    struct student{
    char name[20];
    int a;
    int b;
    char s;
    char x;
    int e;
    }stu[100];
    int n,m[100]={0},max,total,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s %d%d %c %c %d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].s,&stu[i].x,&stu[i].e);
    for(i=0;i<n;i++)
    {
        if(stu[i].a>80&&stu[i].e>=1) m[i]+=8000;
        if(stu[i].a>85&&stu[i].b>80) m[i]+=4000;
        if(stu[i].a>90) m[i]+=2000;
        if(stu[i].a>85&&stu[i].x=='Y') m[i]+=1000;
        if(stu[i].b>80&&stu[i].s=='Y') m[i]+=850;
    }
    max=0;
    total=m[0];
    for(i=1;i<n;i++)
    {
        if(m[i]>m[max])
        {
            max=i;
        }
        total+=m[i];
    }
    printf("%s\n%d\n%d\n",stu[max].name,m[max],total);
    return 0;
}
