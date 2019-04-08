
int main()
{
    long n,i;
    int high[4]={0};
    long higher[4];
    struct student
    {
          long num;
          int yuwen;
          int shuxue;
          int total;
    }stu[100000];
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d %d %d",&stu[i].num,&stu[i].yuwen,&stu[i].shuxue);
        stu[i].total=stu[i].yuwen+stu[i].shuxue;
        if (stu[i].total>high[1]) 
        {
            high[1]=stu[i].total;
            higher[1]=i;
        }
    }
    for (i=1;i<=n;i++)
        if (stu[i].total<=high[1]&&stu[i].total>high[2]&&i!=higher[1])
        {
             high[2]=stu[i].total;
             higher[2]=i;
        }
    for (i=1;i<=n;i++)
        if (stu[i].total<=high[2]&&stu[i].total>high[3]&&i!=higher[1]&&i!=higher[2])
        {
             high[3]=stu[i].total;
             higher[3]=i;
        }
    
    for (i=1;i<4;i++)
        printf("%d %d\n",higher[i],high[i]);
   }    