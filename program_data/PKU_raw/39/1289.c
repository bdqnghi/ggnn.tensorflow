
int main()
{
    int n,i,sum=0,max=0;
    int stu[100],com[100],paper[100],money[100]={0};
    char name[100][20];
    char cadre[100],west[100];
    char best[20];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s %d %d %c %c %d\n",name[i],&stu[i],&com[i],&cadre[i],&west[i],&paper[i]);
        if (stu[i]>80&&paper[i]>0)
            money[i]+=8000;    
        if (stu[i]>85&&com[i]>80)
            money[i]+=4000;
        if (stu[i]>90)
            money[i]+=2000;
        if (stu[i]>85&&west[i]=='Y')
            money[i]+=1000;
        if (com[i]>80&&cadre[i]=='Y')
            money[i]+=850;
        if (money[i]>max)
        {
            max=money[i];
            strcpy(best,name[i]);
        }
        sum+=money[i];
    }
    printf("%s\n%d\n%d",best,max,sum);
}