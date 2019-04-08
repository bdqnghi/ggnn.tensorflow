
struct SCL
{
    char stu[20];
    int avg;
    int rev;
    char ldr;
    char wst;
    int ppr;
    int sum;
}SCL[100];

int main()
{
    int n, max=0, sum=0;
    char *name;
    struct SCL *p;
    scanf("%d", &n);

    for(p=SCL; p<SCL+n; p++)
    {
        scanf("%s %d %d %c %c %d", p->stu, &p->avg, &p->rev, &p->ldr, &p->wst, &p->ppr);
        p->sum=0;

        if(p->avg>80 && p->ppr>0)
            p->sum+=8000;
        if(p->avg>85 && p->rev>80)
            p->sum+=4000;
        if(p->avg>90)
            p->sum+=2000;
        if(p->avg>85 && p->wst=='Y')
            p->sum+=1000;
        if(p->rev>80 && p->ldr=='Y')
            p->sum+=850;
    }

    for(p=SCL; p<SCL+n; p++)
    {
        if(p->sum>max)
        {
            max=p->sum;
            name=p->stu;
        }
        sum+=p->sum;
    }

    printf("%s\n%d\n%d\n", name, max, sum);

    return 0;
}