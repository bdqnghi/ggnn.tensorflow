int j,k;
void G(int a[])
{
    int n,m,q;
    int *p;
    p=a;
    for(n=0;n<j;n++)
    {
           for(m=n+1;m<j;m++)
           {
                 if(p[n]>p[m])
                 {
                     q=p[n];
                     p[n]=p[m];
                     p[m]=q;
                 }
           }
    }
}
void g(int a[])
{
    int n,m,q;
    int *p;
    p=a;
    for(n=0;n<k;n++)
    {
           for(m=n+1;m<k;m++)
           {
                 if(p[n]>p[m])
                 {
                     q=p[n];
                     p[n]=p[m];
                     p[m]=q;
                 }
           }
    }
}
void F(int a[],int b[])
{
    G(a);
    g(b);
    int n,m;
    printf("%d",a[0]);
    for(n=1;n<j;n++)
         printf(" %d",a[n]);
    for(m=0;m<k;m++)
         printf(" %d",b[m]);
}
int main()
{
     int n,m;
     int a[5000],b[5000];
     scanf("%d %d",&j,&k);
     for(n=0;n<j;n++)scanf("%d",&a[n]);
     for(m=0;m<k;m++)scanf("%d",&b[m]);
     F(a,b);
     return 0;
}