
int main()
{
    char str[1000],substr[1000],replace[1000];
    char *p,*q,*r,*start;
    int len;
    scanf("%s %s %s",str,substr,replace);
    len=strlen(substr);
    for (p=str;*p!='\0';p++)
    {
        for (q=p,r=substr;*r!='\0';q++,r++)
            if (*q!=*r)
                break;
        if (*r=='\0')
            {start=p;
            break;}
    }
    for (p=start,q=replace;*q!='\0';p++,q++)
        *p=*q;
    printf("%s",str);
}