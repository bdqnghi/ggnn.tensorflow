
const int a[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int b[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_run(int x)
{
    if((x%100!=0 && x%4==0) || (x%400==0)) return 1;
    else return 0;
}

int main()
{
    int f1[13][13], f2[13][13];
    int i, j, k, n, year, mon1, mon2, sum;
    memset(f1, 0, sizeof(f1));
    memset(f2, 0, sizeof(f2));
    for(i=1; i<=12; i++)
        for(j=i+1; j<=12; j++)
            {
                sum=0;
                for(k=i; k<=j-1; k++)
                    sum+=a[k];
                if(sum%7==0) f1[i][j]=1;
            }
    for(i=1; i<=12; i++)
        f1[i][i]=1;
    for(i=1; i<=12; i++)
        for(j=1; j<=i-1; j++)
            f1[i][j]=f1[j][i];
    for(i=1; i<=12; i++)
        for(j=i+1; j<=12; j++)
            {
                sum=0;
                for(k=i; k<=j-1; k++)
                    sum+=b[k];
                if(sum%7==0) f2[i][j]=1;
            }
    for(i=1; i<=12; i++)
        f2[i][i]=1;
    for(i=1; i<=12; i++)
        for(j=1; j<=i-1; j++)
            f2[i][j]=f2[j][i];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &year, &mon1, &mon2);
        if(is_run(year)==1)
        {
            if(f2[mon1][mon2]==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if(f1[mon1][mon2]==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
