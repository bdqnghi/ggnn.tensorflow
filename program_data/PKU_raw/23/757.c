
int turn(char *a)
{
    int i=0,j,k,n=0;
    char *p,*q;
    for (p=a;*p!='\0';p++)
        n++;
    for (p=a+n-1;p>=a;p--)
    {
        if (*p!=' ')
            i++;
        else
        {
            for (q=p+1;q<=p+i;q++)
                printf("%c",*q);
            printf(" ");
            i=0;
        }
        if (p==a)
            for (q=p;q<p+i;q++)
                printf("%c",*q);
    }
    
}

int main()
{
    char a[100];
    gets(a);
    turn(a);
}
