void arrange(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j+1]<a[j]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}
}
void fun(int a[],int n)
{
    int i;
    for(i=0;i<n-1;i++) a[i]=a[i+1];
}
int main()
{
    int n;
    scanf("%d",&n);
    for(;n!=0;)
    {
        int s=0,m=n,i,a[n],b[n];
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<n;i++) scanf("%d",&b[i]);
        arrange(a,n);
        arrange(b,n);
        for(;m>0;)
        {
            if(a[0]<b[0]) {s--;fun(a,m);}
            else if(a[0]>b[0]) {s++;fun(a,m);fun(b,m);}
            else if(a[0]==b[0])
            {
                if(a[m-1]>b[m-1]) s++;
                else if(a[m-1]<b[m-1]) {s--;fun(a,m);}
                else if(a[m-1]==b[m-1])
                {
                    if(a[0]<b[m-1]) {s--;fun(a,m);}
                    else break;
                }
            }
            m--;
        }
        printf("%d\n",200*s);
        scanf("%d",&n);
    }
    return 0;
}
