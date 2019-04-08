void main()
{
    char *p,*p0;
    p0=p=(char *)malloc(100*sizeof(char));
    gets(p);
    for(p=p0;*p!='\0';p++)
    {
        if(*p!=' ')printf("%c",*p);
        else for(;*p!='\0';p++)
            if(*p!=' ')
            {
                p--;
                printf(" ");
                break;
            }
    }
}