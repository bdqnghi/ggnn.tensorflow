int main()
{
    char a[81]={0},b[81]={0};
    int i;
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]>=97&&b[i]<=122)
        {
            b[i]=b[i]-32;
        }
    }
    if(strcmp(a,b)==0)
        printf("=");
    else {
        if(strcmp(a,b)>0)
            printf(">");
        else printf("<");
    }
    return 0;
}