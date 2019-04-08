void main()
{
char s1[15],s2[4];
int m;
int max(char s1[15]);
void cut(char s1[15],int m,char s2[3]);
while (scanf("%s%s",s1,s2)!=EOF)
{
    m=max(s1);
    cut(s1,m,s2);
    putchar('\n');
}
}

int max(char s1[15])
{
    int i,n,m;
    char max;
    max=s1[0];
    n=strlen(s1);
    for(i=0;i<n-1;i++)
    if(s1[i+1]>max)
    {max=s1[i+1];m=i+1;}
    return(m);
}

void cut(char s1[15],int m,char s2[3])
{
    int i,j,n;
    n=strlen(s1);
    for(i=n+2;i>m;i--)
    s1[i]=s1[i-3];
    for(i=m+1;i<m+4;i++)
    s1[i]=s2[i-m-1];
    for(i=0;i<n+3;i++)
    printf("%c",s1[i]);
}
