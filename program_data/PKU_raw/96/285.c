int main()
{
    int b,i;
    char a[100];
    gets(a);
    b=(a[0]-'0')*10+a[1]-'0';
    if (((a[1]=='\0')||(b<13))&&(a[2]=='\0'))
    {
        printf("0\n");
        printf("%s",a);
        return 0;
    }
    b=a[0]-'0';
    for (i=0;a[i+1]!='\0';i++)
    {
    b=b*10+a[i+1]-'0';
    if (b>=13)
        {
            a[i]=b/13+'0';
            b=b%13;
        }
    else
    a[i]=0+'0';
    }
    a[i]=0;
    if(a[0]-'0'!=0)
    {
    printf("%s\n",a);
    printf("%d",b);
    }
    else
    {
    printf("%s\n",&a[1]);
    printf("%d",b);
    }

return 0;
}
