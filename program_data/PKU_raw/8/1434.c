
void shuru(int a[],int b[],int m,int n)
{
    int *p=a,*q=b;
    int i,j;
    for(i=0;i<m;i++)
    {scanf("%d",p);p++;}
    for(j=0;j<n;j++)
    {scanf("%d",q);q++;}
}
void paixu(int a[],int m)
{
    int *p=a,b,c,d;
    for(b=0;b<m-1;b++)
    {
        for(c=0;c<m-1-b;c++)
        {
            if(*(p+c)>*(p+c+1))
            {
                d=*(p+c);*(p+c)=*(p+c+1);*(p+c+1)=d;
            }
        }
    }
}
void hebing(int a[],int b[],int c[],int m,int n)
{
    int *r=a,*s=b,*t=c,p,q;
    for(p=0;p<m;p++)
    {
        *(t+p)=*(r+p);
    }
    for(q=0;q<n;q++)
    {
        *(t+m+q)=*(s+q);
    }
}
void shuchu(int a[],int b)
{
    int c;
    printf("%d",a[0]);
    for(c=1;c<b;c++)
    {
        printf(" %d",a[c]);
    }
}
int main()
{
    int a[1000]={0},b[1000]={0},c[2000]={0},m,n;
    scanf("%d%d",&m,&n);
    shuru(a,b,m,n);
    paixu(a,m);paixu(b,n);
    hebing(a,b,c,m,n);
    shuchu(c,m+n);
}
