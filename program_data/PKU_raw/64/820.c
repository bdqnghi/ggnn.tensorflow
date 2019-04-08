int main()
{
int M;
M=N*(N-1)/2;
int x[N],y[N],z[N],d[M],a[M],b[M],p=0,i,j,n,k,m;
double c;
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
scanf("%d%d%d",&x[i],&y[i],&z[i]);
printf("\n");
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
d[p]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
a[p]=i;
b[p]=j;
p++;
}
for(j=1;j<=p;j++)
for(i=0;i<p-j;i++)
if(d[i]<d[i+1])
{
d[i]=d[i]+d[i+1];
d[i+1]=d[i]-d[i+1];
d[i]=d[i]-d[i+1];
a[i]=a[i]+a[i+1];
a[i+1]=a[i]-a[i+1];
a[i]=a[i]-a[i+1];
b[i]=b[i]+b[i+1];
b[i+1]=b[i]-b[i+1];
b[i]=b[i]-b[i+1];
}
for(i=0;i<p;i++)
{
k=a[i];
m=b[i];
c=sqrt(d[i]);
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[k],y[k],z[k],x[m],y[m],z[m],c);
}
return 0;
}

