int main()
{
    char *p;
    int i;
    p=(char *)malloc(1000*sizeof(char));
    scanf("%c",p);  
    for (i=0;scanf("%c",p+i+1)!=EOF;i++)
    {
        if (isspace(*(p+i))==0)
        printf("%c",*(p+i));
        if (isspace(*(p+i))&&isspace(*(p+i+1))==0)
        printf(" ");
    }
    
    return 0;
}
