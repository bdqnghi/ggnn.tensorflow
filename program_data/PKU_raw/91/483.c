int main()
{
    int n,i,j;
    char a[105],b[105];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(i==strlen(a)-1)
        {
            b[i]=a[i]+a[0];
        }
        else
            b[i]=a[i]+a[i+1];
    }
    b[strlen(a)]='\0';
        puts(b);
  
    return 0;
}
