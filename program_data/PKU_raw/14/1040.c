
struct Top
{
    int num;
    float score;
}Top[4]={{0,0}};
struct Top *p;

void maopao(int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        for(p=Top; p<Top+n-i; p++)
        {
            if((p->score) < ((p+1)->score))
            {
                Top[3]=*p;
                *p=*(p+1);
                *(p+1)=Top[3];
            }
        }
    } 
}

void sort(float a, int n)
{
    p=Top+2;
    if(a > (p->score))
    {
        p->score=a;
        p->num=n;
    }
    maopao(3);
}

int main()
{
    int i, n, num;
    float yw, sx, score;

    scanf("%d\n", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %f %f", &num, &yw, &sx);
        float score=yw+sx;
        sort(score, num);
    }
    for(p=Top;p<Top+3;p++)
    {
        printf("%d %g\n", p->num, p->score);
    }

    return 0;
}