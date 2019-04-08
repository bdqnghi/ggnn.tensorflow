
int main()
{
int n,i,a[100],max,sm;
scanf("%d\n",&n);
for(i=0;i<=n-2;i++)
scanf("%d\n",&a[i]);
scanf("%d",&a[n-1]);
max=a[0];
for(i=0;i<=n-1;i++)
{if(a[i]>max) max=a[i];}
printf("%d\n",max);
sm=a[0];
for(i=0;i<=n-1;i++)
{if(a[i]!=max&&a[i]>sm) sm=a[i];}
printf("%d",sm);
}


