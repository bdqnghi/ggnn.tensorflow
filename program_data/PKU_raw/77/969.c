

int main()
{
    int n,i,j,k[101];
    char a[101],b,g;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++) k[i]=i;
    b=a[0];
    for(i=0;;i++)
    {
        if(a[i]!=b) {g=a[i];break;}
    }
    while(n>0)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==g)
            {
                printf("%d %d\n",k[i-1],k[i]);
                for(j=i-1;j<n;j++)
                {
                    k[j]=k[j+2];
                    a[j]=a[j+2];
                }
                n=n-2;
                i=i-2;
            }
        }
    }
    return 0;
}
