int a[1000],b[1000],c[1000];
char n1[1000],n2[1000];
int i,j,k,l,m,n,xys,ysc;
int main()
{
    gets(n1);
    gets(n2);
    a[0]=strlen(n1);
    for (i=1;i<=a[0];++i) a[i]=n1[a[0]-i]-'0';
    b[0]=strlen(n2);
    for (i=1;i<=b[0];++i) b[i]=n2[b[0]-i]-'0';
    int len=max(a[0],b[0]);
    j=0;
    for (i=1;i<=len;++i){
        c[i]=a[i]+b[i]+j;
        j=c[i]/10;
        c[i]=c[i]%10;
    }
    c[0]=len;
    if (j>0) c[++c[0]]=j;
    while (c[c[0]]==0&&c[0]>1) --c[0];
    for (i=c[0];i>0;--i) printf("%d",c[i]);
    return 0;
}

