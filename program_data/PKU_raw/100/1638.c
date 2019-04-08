int main()
{
    char a[300];
    int b[150]={0};
    int i,j,s=0,n;
    scanf("%s",a);
    n=strlen(a);
    for (i=0;i<n;i++)
    {
        j=a[i]-'\0';
        b[j]++;
    }
    for (i=65;i<=90;i++)
        if (b[i]!=0) {
           printf("%c=%d\n",i,b[i]);
           s++;
           }
    for (i=97;i<=122;i++)
        if (b[i]!=0){
           printf("%c=%d\n",i,b[i]);
           s++;
           }
    if (s==0) printf("No\n");
    return 0;
}