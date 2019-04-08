main()
{
int n,m;
scanf("%d",&n);
m=n*(n-1)/2;
double a[n][2],dis[m];
int i,j,k;
k=0;
for(i=0;i<n;i++)
{
for(j=0;j<2;j++)
scanf("%lf",&a[i][j]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
double x1,x2;
x1=fabs(a[j][0]-a[i][0]);
x2=fabs(a[j][1]-a[i][1]);
x1=pow(x1,2);
x2=pow(x2,2);
dis[k]=sqrt(x1+x2);
k++;
}
}
double max;
max=dis[0];
for(k=0;k<m;k++)
{
if(dis[k]>max)
max=dis[k];
}
printf("%.4f",max);
}



