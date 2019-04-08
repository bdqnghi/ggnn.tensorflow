int main()
{
    int n,i,s[20000],a[100];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    scanf ("%d",&s[i]);
    for (i=0;i<100;i++)
    a[i]=0;
    printf("%d",s[0]);
    a[s[0]]=1;
    for (i=1;i<n;i++)
    if(a[s[i]]==0)
    {
        printf (" %d",s[i]);
        a[s[i]]=1;
    }
    return 0;
}