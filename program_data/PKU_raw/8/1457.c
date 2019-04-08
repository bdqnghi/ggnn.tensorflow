void sheng(int *a,int n)
{
        int i,j,b;
        for(i=0;i<n;i++)
        {
        for(j=i;j<n;j++)
        {
        if (a[j]<a[i])
        
          {
          b=a[i];
          a[i]=a[j];
          a[j]=b;
          }
          }
        }
}
int hebing(int* a ,int n,int *b ,int m,int *c)
{
       
       int i;
       for(i=0;i<n;i++)
       c[i]=a[i];
       for(i=n;i<m+n;i++)
       c[i]=b[i-n];
       return *c;
}
int main()
{
int n,m,i;
scanf("%d %d",&n,&m);
int *a=(int*)malloc(sizeof(int)*n);
int *b=(int*)malloc(sizeof(int)*m);
int *c=(int*)malloc(sizeof(int)*(m+n));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<m;i++)
scanf("%d",&b[i]);
sheng(a,n);
sheng(b,m);
hebing(a,n,b,m,c);
printf("%d",c[0]);
for(i=1;i<m+n;i++)
printf(" %d",c[i]);

}
