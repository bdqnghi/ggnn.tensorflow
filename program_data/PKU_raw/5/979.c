int f(char x)
{
    if(x=='A'||x=='T'||x=='G'||x=='C') return 0;
    else return 1;
}
int main(int argc, char *argv[])
{
    char a[501],b[501];
    int x=0,i,y=1;
    float p;
    scanf("%f\n",&p);
    gets(a);
    gets(b);
    for(i=1;i<=strlen(a);i++)
    if(f(a[i-1])) y=0;
    for(i=1;i<=strlen(b);i++)
    if(f(b[i-1])) y=0;
    if(strlen(a)!=strlen(b)) y=0;
    if(y==0) printf("error");
    else 
    {
        for(i=1;i<=strlen(a);i++)
        if(a[i-1]==b[i-1]) x++;
        if(x>p*strlen(a)) printf("yes");
        else printf("no");
    }
    return 0;
}
