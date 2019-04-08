int main(){
int n,i,j,k,t;
int x[101],y[101],z[101],a[46],b[46];
double d[46],t1;
scanf("%d",&n);
for (i=1;i<=n;i++)
scanf("%d%d%d",&x[i],&y[i],&z[i]);
k=0;
for (i=1;i<=n-1;i++)
for (j=i+1;j<=n;j++){
	k=k+1; 
	d[k]=sqrt(1.0*(x[i]-x[j])*(x[i]-x[j])+1.0*(y[i]-y[j])*(y[i]-y[j])+1.0*(z[i]-z[j])*(z[i]-z[j]));
    a[k]=i;
	b[k]=j;
}
for (i=1;i<=k;i++)
for (j=1;j<=k-i;j++)
if (d[j]<d[j+1])
{
t1=d[j];
d[j]=d[j+1];
d[j+1]=t1;
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
t=b[j];
b[j]=b[j+1];
b[j+1]=t;
}
for (i=1;i<=k;i++)
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],d[i]);
return 0;
}