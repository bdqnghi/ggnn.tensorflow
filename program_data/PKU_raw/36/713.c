void num(char a[],int c[],int l[],int n)
{
     int i,t;
     for(i=0;i<n;i++)
     {
                     if(a[i]<91&&a[i]>64){t=a[i]-65;c[t]=c[t]+1;}
                     if(a[i]<123&&a[i]>96){t=a[i]-97;l[t]=l[t]+1;}
     }
}
int main()
{
    void num(char a[],int c[],int l[],int n);
    char a[500]={'\0'},b[500]={'\0'};
    int cap[2][26]={0},lit[2][26]={0},t=1,i,m,n;
    scanf("%s%s",a,b);
    n=strlen(a);
    m=strlen(b);
    num(a,cap[0],lit[0],n);
    num(b,cap[1],lit[1],m);
    for(i=0;i<26;i++)
    {
    if(cap[0][i]==cap[1][i]&&lit[0][i]==lit[1][i]);
    else {t=0;break;}
}
if(t==0)printf("NO");
else printf("YES");
}
