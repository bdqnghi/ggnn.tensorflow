int main()
{
    char a[100];
    gets(a);
    int n=strlen(a);
    int i;
    char b;
    for(i=0;i<n-1;i++){
                       b=a[i]+a[i+1];
                       printf("%c",b);
                       }
    printf("%c",a[n-1]+a[0]);
    return 0;
}
