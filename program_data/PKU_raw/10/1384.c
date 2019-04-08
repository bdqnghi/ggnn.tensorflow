
int main()
{
    int n,m=0,a[100001]={100000000}; 
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int t;           
        scanf("%d",&t);     
        int j=m;   
        while (a[j]<t) j--;         
        a[++j]=t;
        m=j>m?j:m;
    }
    printf("%d\n",m);
    getchar();
    getchar();
    return 0;
}
