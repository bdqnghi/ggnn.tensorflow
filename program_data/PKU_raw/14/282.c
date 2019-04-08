struct student
{
    int xuehao;
    int yuwen;
    int shuxue;
}stu[100000];
int main()
{
    int sum[100000];
    long i,j,n,t;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d %d %d",&stu[i].xuehao,&stu[i].yuwen,&stu[i].shuxue);
        sum[i]=stu[i].yuwen+stu[i].shuxue;
    }
    
    for (i=0;i<3;i++)
    {
        t=0;
        for (j=0;j<n-1;j++)
        {
            if (sum[j+1]>sum[t])
            t=j+1;
        }
        printf ("%d %d\n",stu[t].xuehao,sum[t]);
        sum[t]=0;
    }
    getchar();
    getchar();
    getchar();
}

 
