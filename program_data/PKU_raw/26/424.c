int main()
{
    char a[101];
    int i,l,m;
    gets(a);
    l=strlen(a);
    printf("%c",a[0]); 
    for(i=1;i<l;i++)
    {
         if(a[i]!=' ') printf("%c",a[i]);
         else if(a[i]==' '&&a[i-1]!=' ') printf("%c",a[i]);
         else if(a[i]==' '&&a[i-1]==' ') continue;
    }
    getchar();
}