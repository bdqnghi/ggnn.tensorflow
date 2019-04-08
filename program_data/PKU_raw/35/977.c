
int main()
{
    int z[9][9]={0};
    int m,n,max,min;
    int i,j,a=0,b=0,p,q;

    scanf("%d,%d",&m,&n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&z[i][j]);
        }
    }

    for (i=0;i<m;i++)
    {
        a = 0;
        max=z[i][0];
        q=0;
        for (j=0;j<n;j++)
        {
            if (z[i][j]>max)
            {
                max=z[i][j];
                q=j;
            }
        }
        min=max;
        for (p=0;p<m;p++)
        {
            if (z[p][q]<min)
            {
                a = 1;
                break;
            }
        }
        if (a==0)
        {
            b++;
            printf("%d+%d\n",i,q);
            break;
        }
    }

    if (b==0)
    {
        printf("No");
    }
    return 0;
}
