
struct people
{
       char name[30];
       int qimo;
       int pingyi;
       char gan;
       char xi;
       int lunwen;
       int jiang;
}line[100], temp;
int main()
{
    int n, i, j;
    scanf("%d\n", &n);
    int sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%s %d %d %c %c %d", &line[i].name, &line[i].qimo, &line[i].pingyi, &line[i].gan, &line[i].xi, &line[i].lunwen);
        line[i].jiang=0;
        if(line[i].qimo>80&&line[i].lunwen!=0)
        {
            line[i].jiang+=8000;
        }
        if(line[i].qimo>85&&line[i].pingyi>80)
        {
            line[i].jiang+=4000;
        }
        if(line[i].qimo>90)
        {
            line[i].jiang+=2000;
        }
        if(line[i].qimo>85&&(int)line[i].xi==(int)'Y')
        {
            line[i].jiang+=1000;
        }
        if(line[i].pingyi>80&&(int)line[i].gan==(int)'Y')
        {
            line[i].jiang+=850;
        }
        sum+=line[i].jiang;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(line[j].jiang<line[j+1].jiang)
            {
                temp=line[j];
                line[j]=line[j+1];
                line[j+1]=temp;
            }
        }
    }
    printf("%s\n%d\n%d", line[1].name, line[1].jiang, sum);
    return 0;
}
