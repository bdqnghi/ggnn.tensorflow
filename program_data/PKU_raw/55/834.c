int main()
{
    int a,b,i,k,s,j,d[40];
    char n[40];
    scanf("%d %c",&a,&n[0]);
    i=0;
    while (n[i]!=' ')
    {
          i=i+1;
          scanf("%c",&n[i]);
    }
    scanf("%d",&b);
    k=1;
    s=0;
    for (j=i-1;j>=0;j--)
    {
        if (n[j]>='0' && n[j]<='9')
        s=s+k*(n[j]-'0');
        else if (n[j]>='a' && n[j]<='z')
        s=s+k*(n[j]-'a'+10);
        else s=s+k*(n[j]-'A'+10);
        k=k*a;
    }
    i=0;
    while (s>=b)
    {
          d[i]=s%b;
          i=i+1;
          s=s/b;
    }
    d[i]=s;
    for (j=i;j>=0;j--)
    {
        if (d[j]<=9)
        n[i-j]=d[j]+'0';
        else n[i-j]=d[j]-10+'A';
    }
    n[i+1]='\0';
    puts(n);     
    getchar();
    getchar();
}