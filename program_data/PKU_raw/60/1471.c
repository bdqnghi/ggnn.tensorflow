int main()
{
    int k,m,n,i,flag=0;
    scanf("%d",&k);
    if(k<5) printf("empty");
    else if(k<7) printf("3 5\n");
    else
    {
        printf("3 5\n");
        for(m=5;m<=k;m++)
        {
            flag=0;
            for(i=2;i*i<=m;i++)
                if(m%i==0)
                {
                    flag=1;
                    break;
                }
            if(flag==1) continue;
            n=m+2;
            for(i=2;i*i<=n;i++)
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
        if(flag==0) printf("%d %d\n",m,n);
        }
    }
    return 0;
}
