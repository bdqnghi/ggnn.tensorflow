int a[10000]={0},b[10000]={0},c[10000],d[10000];

void jian(int a[10000],int b[10000])
{
    int i,j,k,m;
    for (i=0;i<=9000;i++) c[i]=0;
    m=a[0]+b[0]-1;
    for (i=1;i<=a[0]+b[0]-1;i++)
    {
        c[i]=c[i]+a[i]-b[i];
        if (c[i]<0)
        {
            c[i+1]=-1;
            c[i]+=10;
        }
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
    cin >>n;
    for (j=1;j<=n;j++)
    {
    for (i=0;i<=9000;i++) {a[i]=0;b[i]=0;}
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
    jian(a,b);
    }
    return 0;
}
