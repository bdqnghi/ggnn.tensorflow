int num(int n)
{
    if(n==1) return 1;
    if(n==2) return 1;
    if(n>=3) return num(n-1)+num(n-2);
}

int main()
{
    int n,s,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        printf("%d\n",num(s));
    }
    getchar();
    getchar();
}