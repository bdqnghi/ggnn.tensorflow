int f(char x)
{
    int xx;
    xx=x-48;
    if(xx>9)xx=x-'A'+10;
    if(xx>36)xx=x-'a'+10;
    return xx;
}
char g(int y)
{
     char yy;
     if(y<10)yy=y+'0';
     if(y>=10)yy=y-10+'A';
     return yy;
}    
int main()
{
    long nn=0;
    int a,b,i;
    char n[500];
    scanf("%d %s %d",&a,n,&b);
    int length=strlen(n);
    int k=1;
    for(i=length-1;i>=0;i--)
    {
            nn+=f(n[i])*k;
            k*=a;
    }
    int m[500];
    int j=0;
    do
    {
            m[j]=nn%b;
            nn=nn/b;
            j++;
    }
    while(nn>=1);
    for(i=j-1;i>=0;i--)printf("%c",g(m[i]));
    
}