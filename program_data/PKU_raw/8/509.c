int f(int c[],int w);
int main()
{int n,m,i,j;int a[10],b[10];
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(j=0;j<m;j++)
{scanf("%d",&b[j]);}
f(a,n);
f(b,m);
for(i=0;i<n;i++) {printf("%d ",a[i]);}
for(j=0;j<m-1;j++) {printf("%d ",b[j]);}printf("%d",b[m-1]);}
int f(int c[],int w)
{int i,j,k,t;
  for(i=0;i<w-1;i++)
     {k=i;
         for(j=i+1;j<w;j++)
             if(c[j]<c[k])
                 k=j;
                t=c[k];c[k]=c[i];c[i]=t;}
     }
