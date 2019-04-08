int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
int a[100];
char c[100];

int main()
{
    int judge1,judge2;
    judge1=judge2=0;
    int count=0;
    int a[5][5];
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(a1=0;a1<=4;a1++)
    {
        for(a2=0;a2<=4;a2++)
        {
            judge1=judge2=0;
            for(a3=0;a3<=4;a3++)
            {
                if(a[a1][a3]>a[a1][a2])
                {
                    break;
                }
                if(a3==4)
                {
                    judge1=1;
                }
            }
            for(a4=0;a4<=4;a4++)
            {
                if(a[a4][a2]<a[a1][a2])
                {
                    break;
                }
                if(a4==4)
                {
                    judge2=1;
                }
            }
            if(judge1==1&&judge2==1)
            {
                printf("%d %d %d",a1+1,a2+1,a[a1][a2]);
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("not found")
        ;
    }
}
