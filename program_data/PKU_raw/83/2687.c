int main()
{
int i,n;
double a[10],b[10],s,m,g;
scanf("%d",&n);
for(i=0,m=0;i<n;i++)
{
scanf("%lf",&a[i]);
m=m+a[i];
}
for(i=0;i<n;i++) scanf("%lf",&b[i]);
for(i=0,s=0;i<n;i++)
{
if(b[i]>=90&&b[i]<=100) b[i]=4.0;
else if(b[i]>=85&&b[i]<=89) b[i]=3.7;
else if(b[i]>=82&&b[i]<=84) b[i]=3.3;
else if(b[i]>=78&&b[i]<=81) b[i]=3.0;
else if(b[i]>=75&&b[i]<=77) b[i]=2.7;
else if(b[i]>=72&&b[i]<=74) b[i]=2.3;
else if(b[i]>=68&&b[i]<=71) b[i]=2.0;
else if(b[i]>=64&&b[i]<=67) b[i]=1.5;
else if(b[i]>=60&&b[i]<=63) b[i]=1.0;
else b[i]=0;
s=s+a[i]*b[i];
}
g=s/m;
printf("%.2lf\n",g);
return 0;
}
