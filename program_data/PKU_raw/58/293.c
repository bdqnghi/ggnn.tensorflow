int panduan(char a)
{
    if(a>='0'&&a<='9')
    return 0;
    if(a>='a'&&a<='z')
    return 0;
    if(a>='A'&&a<='Z')
    return 0;
    if(a=='_')
    return 0;
    return 1;
}
int main()
{
    char a[81];
    int k;
    scanf("%d\n",&k);
    for(int j=0;j<k;j++)
    {
                       gets(a);
                       int n=strlen(a);
                       if(!(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')))
                       {
                       printf("0\n");
                       continue;
                       }
                       else
                       for(int i=0;i<n;i++)
                       {
                               if(panduan(a[i]))
                               {
                                  printf("0\n");
                                  goto end;
                               }
                       }
                       printf("1\n");
                       end:;
    }
}