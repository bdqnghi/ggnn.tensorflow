int main()
{
int m,n;
scanf("%d",&m);
for (int i=0;i<m;i++)
{
scanf("%d",&n);
float s=0;
int a[n+2];
a[1]=1;
a[0]=1;
for (int j=2;j<n+2;j++)
a[j]=a[j-1]+a[j-2];
for (int j=1;j<=n;j++)
{
s+=1.0*a[j+1]/a[j];
}
printf("%.3f\n",s);
}
}