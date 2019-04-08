int main()
{
    int n,a[65535]={0},i,j,sum=0;
    scanf("%d",&n);
    if(n==1)
    printf("0\n");
    while(1)
    {
            scanf("%d %d",&i,&j);
            if(i==0&&j==0)
            break;
            else
            {
                a[i]--;
                a[j]++;
            }
    }
    for(i=0;i<n;i++)
    {
                    if(a[i]==(n-1))
                    {
                                   printf("%d",i);
                                   sum++;
                    }
    }
    if(sum==0)
    printf("NOT FOUND");
    getchar();
    getchar();
}
