int main()
{
    int i,j,k,n,p,m,c,a[101];
    char str[15],substr[4],x[20];
    while (scanf("%s %s",str,substr)!=EOF)
    {
        c=0;
        n=strlen(str);
        for (i=0;i<n;i++)
            if (str[c]<str[i])
            {
                c=i;
            }
        for (j=0;j<=c;j++) x[j]=str[j];
        for (j=c+1;j<=c+3;j++) x[j]=substr[j-c-1];
        if (c<n-1)  for (j=c+4;j<n+3;j++) x[j]=str[j-3];
        for (i=0;i<n+3;i++) putchar(x[i]);
        printf("\n");
    }
}
