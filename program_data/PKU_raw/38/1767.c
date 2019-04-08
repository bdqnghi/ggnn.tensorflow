int main()
{
int k,n,i,j;double a[100]={0},sum,s2;
scanf("%d",&k);
while(k--)
{
scanf("%d",&n);sum=s2=0;
for(i=0;i<n;i++)
{scanf("%lf",&a[i]);sum+=a[i];}
sum/=n;
for(i=0;i<n;i++)
s2+=(a[i]-sum)*(a[i]-sum);
s2/=n;
printf("%.5lf\n",sqrt(s2));
}
return 0;
}
