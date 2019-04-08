void main()
{
int a[10],b[10],i,c;
float d[10],s=0,l=0;
scanf("%d",&c);
for(i=0;i<c;i++)
scanf("%d",&b[i]);
for(i=0;i<c;i++)
scanf("%d",&a[i]);
for(i=0;i<c;i++)
{
if(a[i]>=90&&a[i]<=100)
d[i]=4.0*b[i];
if(a[i]>=85&&a[i]<=89)
d[i]=3.7*b[i];
if(a[i]>=82&&a[i]<=84)
d[i]=3.3*b[i];
if(a[i]>=78&&a[i]<=81)
d[i]=3.0*b[i];
if(a[i]>=75&&a[i]<=77)
d[i]=2.7*b[i];
if(a[i]>=72&&a[i]<=74)
d[i]=2.3*b[i];
if(a[i]>=68&&a[i]<=71)
d[i]=2.0*b[i];
if(a[i]>=64&&a[i]<=67)
d[i]=1.5*b[i];
if(a[i]>=60&&a[i]<=63)
d[i]=1.0*b[i];
if(a[i]<=60)
d[i]=0;
s=s+d[i];
l=l+b[i];
}
s=s/l;
printf("%.2f\n",s);
}