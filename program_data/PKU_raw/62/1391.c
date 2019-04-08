int main()
{
    //char a[10000];
    char *p,*p1;
    p1=p=(char *)malloc(100*sizeof(char));
    int i,n;
    for(i=0;*(p+i-1)!='\n';i++)
    {
                            scanf("%c",(p+i));
                            //printf("%c",*(p+i));
    }
    n=i;
    //gets(a);
    //p=p1;
    for(;*p!='\0';p++)
    {
                         if(((*p!=' ')&&(*(p+1)==' '))||((*p==' ')&&(*(p+1)!=' '))||((*p!=' ')&&(*(p+1)!=' '))||((*p!=' ')&&(*(p+1)=='\0')))
                         {
                                      printf("%c",*p);
                        }}
    return 0;
}