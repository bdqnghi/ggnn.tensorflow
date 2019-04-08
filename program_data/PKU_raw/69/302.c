int a[10000],b[10000],c[10000],d[10000];

void jia(int a[10000],int b[10000])
{
    int i,j,k,m;
    for (i=0;i<=9000;i++)
    c[i]=0;
    m=a[0]+b[0]-1;
    for (i=1;i<=a[0]+b[0]-1;i++)
    {
        c[i]=c[i]+a[i]+b[i];
        c[i+1]=c[i]/10;
        c[i]=c[i]%10;
    }
    j=m+10;
    while (j>1&&c[j]==0) j--;
    for (i=j;i>=1;i--)
    cout <<c[i];
    cout <<endl;
}

int main()
{
    int i,j,k,m,n;
    int len1=0,len2=0;
    char s1[10000],s2[10000];
    cin >>s1;
    cin >>s2;
    len1=strlen(s1);
    len2=strlen(s2);
    a[0]=len1;
    b[0]=len2;
    for (i=1;i<=len1;i++)
    a[len1-i+1]=((int)s1[i-1])-48;
    for (i=1;i<=len2;i++)
    b[len2-i+1]=((int)s2[i-1])-48;
    jia(a,b);
    return 0;
}
