    int main()
{
    char a[1000];
    gets(a);
    int n=1;
    int c=strlen(a);
    int sz[n],sz1[n];
    sz[0]=-1;
    for (int i=1;a[i]!='\0';i++)
    {
         if(a[i]==' ')
         {
             sz[n]=i;
             n++;
         }
    }
    sz[n]=c;
    for(int i=0;i<=n;i++)
    {
        sz1[i]=sz[i+1]-sz[i]-1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(sz1[i]>0&&sz1[i]<10000)
        {
            printf("%d,",sz1[i]);
        }
    }
    printf("%d",sz1[n-1]);
    return 0;
}