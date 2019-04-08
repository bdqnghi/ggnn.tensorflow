
int mat[5][5];

int check(int n,int m)
{
    int l1,t;
    if ((n<0) || (n>4) || (m<0) || (m>4))
        return 0;
    else
        {
            for (l1=0;l1<5;l1++)
                {
                    t=mat[m][l1];
                    mat[m][l1]=mat[n][l1];
                    mat[n][l1]=t;
                }
            return 1;
        }
}
int main()
{
    int n,m;
    int l1,l2;

    for (l1=0;l1<5;l1++)
        for (l2=0;l2<5;l2++)
            scanf("%d",&mat[l1][l2]);
    scanf("%d%d",&n,&m);
    if (check(n,m)==0)
        printf("error\n");
    else
        for (l1=0;l1<5;l1++)
            {
                for (l2=0;l2<4;l2++)
                    printf("%d ",mat[l1][l2]);
                printf("%d\n",mat[l1][4]);
            }

    return 0;
}
