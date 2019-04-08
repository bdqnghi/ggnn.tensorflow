int main()
{
    int n,i;
    int a[30000];
    scanf("%d",&n);
    for (i=0;i<30000;i++) a[i]=0;
    int count1=0;
    for (i=3;i<=n;i++)
    {
        int count2=0;
        for (int j=2;j<i;j++)
        {
            if (i%j==0) count2++;
            }
        if (count2==0) a[i]=i;
        if (a[i]-a[i-2]==2) 
        {
           printf("%d %d\n",i-2,i);
           count1++;
        }
        } 
    if (count1==0) printf("empty");
    }
