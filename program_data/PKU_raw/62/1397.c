
int main()
{
    char *p,*q;
    int i,j,k=0;
    char a[10000];
    gets(a);
    p=a;
    for(i=0;i<strlen(a);i++)
    {if(*p!=' ')
    {printf("%c",*p);k=0;}
    if(*p==' '&&k==0)
    {printf(" ");
    k++;}
    p++;
    }
}