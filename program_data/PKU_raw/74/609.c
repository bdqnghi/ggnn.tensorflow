int main()
{
    int i,n,m,j,k,nx,f,ix,flag;
    int a[100000]={0};
    int s[100000]={0};
    scanf("%d %d",&m,&n);
    flag=0;
    for (i=m;i<=n;i++)
    {
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                a[i]=1;
                break;
            }
        }
    }
    for (i=m;i<=n;i++)
    {
        if (a[i]==0)
        {
            ix=i;
            k=0;
            while (ix>0)
            {
                s[k]=ix%10;
                k++;
                ix=ix/10;
            }
            f=0;//printf("%d\n",k);
            for (j=0;j<k/2+1;j++)
            {
                if (s[j]!=s[k-j-1])
                {
                    f=1;
                    break;
                }
            }
            if (f==0&&flag==0)
            {
                printf("%d",i);
                flag=1;
            }
            else if (f==0)
            {
                printf(",%d",i);
                flag=1;
            }
        }
    }
    if (flag==0) printf("no");
    printf("\n");
    return 0;
}


