int main()
{
    char a[N],b[N],ch;
    int i,j,n1,n2;
    scanf("%s%s",a,b);
    n1=strlen(a);
    n2=strlen(b);
    for(i=1;i<n1;i++)
        for(j=n1-1;j>=i;j--)
            if(a[j]<a[j-1])
            {
                ch=a[j];
                a[j]=a[j-1];
                a[j-1]=ch;
            }
    for(i=1;i<n2;i++)
        for(j=n2-1;j>=i;j--)
            if(b[j]<b[j-1])
            {
                ch=b[j];
                b[j]=b[j-1];
                b[j-1]=ch;
            }
    if(strcmp(a,b)==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}