int main()
{
    int i,x;
    char c1[81],c2[81];
    gets(c1);
    gets(c2);
    for(i=0;c1[i];i++)
    {
        if(c1[i]>='A'&&c1[i]<='Z')
        c1[i]=c1[i]+32;
    }
    for(i=0;c2[i];i++)
    {
        if(c2[i]>='A'&&c2[i]<='Z')
        c2[i]=c2[i]+32;
    }
    x=strcmp(c1,c2);
    if(x>0)
    {
    printf(">");
    }
    else if(x<0)
    {
        printf("<");
    }
    else
    {
    printf("=");
    }
    return 0;
}
