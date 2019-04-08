int main()
{
int i,j,n,k=0,w;
int x[10],y[10],z[10];
float d[45],dis[10][10],p=0,q=0,m=0,o=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>x[i]>>y[i]>>z[i];
}
for(j=0;j<n-1;j++)
{
for(i=j+1;i<n;i++)
{
o=(x[j]-x[i])*(x[j]-x[i]);
p=(y[j]-y[i])*(y[j]-y[i]);
q=(z[j]-z[i])*(z[j]-z[i]);
d[k]=sqrt(o+p+q);
k++;
}
}
for(w=1;w<n*(n-1)/2;w++)
{
for(k=0;k<(n*(n-1))/2-w;k++)
{
if(d[k]>d[k+1])
{
m=d[k+1];
d[k+1]=d[k];
d[k]=m;
}
}
}
for(k=n*(n-1)/2-1;k>=0;k--)
{
if(d[k]!=d[k-1])
{
for(j=0;j<n-1;j++)
{
for(i=j+1;i<n;i++)
{
o=(x[j]-x[i])*(x[j]-x[i]);
p=(y[j]-y[i])*(y[j]-y[i]);
q=(z[j]-z[i])*(z[j]-z[i]);
if(d[k]==sqrt(o+p+q))
{
printf("(%d,%d,%d)-(%d,%d,%d)=%.2f",x[j],y[j],z[j],x[i],y[i],z[i],d[k]);
cout<<endl;
}
}
}}}
return 0;
}