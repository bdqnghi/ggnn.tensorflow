int main()
{
int n,i,t=0,f[300]={0};
float a[300]={0},d[300]={0},s=0,max=0;
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%f",&a[i]);
s=s+a[i];
}
s=s/n;
for (i=0;i<n;i++)
{
d[i]=fabs((float)a[i]-s);
if (d[i]>max) max=d[i]; 
}
for (i=0;i<n;i++)
{
//printf("%f,",(d[i]-max));
if ((max-d[i])<1e-6)
{
f[t]=a[i];
t++;
}
}
//printf("%f %f\n",s,max);
for (i=0;i<t-1;i++) printf("%d,",f[i]);
printf("%d\n",f[t-1]);
return(0);
}
