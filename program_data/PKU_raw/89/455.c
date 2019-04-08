int main()
{
    int n,t,i,j,k,cnt=0,cnt1=0,cnt2=0;
    scanf("%d",&n);
    t=10*n;
    int a[t],b[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if((a[i]==0)&&(b[i]==0))
            break;
        else
            cnt++;
    }
    for(j=0;j<n;j++)
    {
        for(i=0,k=0;i<cnt,k<cnt;i++,k++)
        {
            if(a[i]==j)
                cnt1++;
            if(b[k]==j)
                cnt2++;
        }
        if((cnt1==0)&&(cnt2==n-1))
        {
            printf("%d\n",j);
            break;
        }
        cnt1=0;
        cnt2=0;        
    }
    if((cnt1==0)&&(cnt2==0))
    printf("NOT FOUND\n");
    getchar();
    getchar();
    getchar();
    getchar();
}