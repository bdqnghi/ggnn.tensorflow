int main()
{
int a[10],b[10],n,i,j;
float s,c[10],s1=0.0,s2=0.0;
scanf("%d",&n);
for(i=0;i<n-1;i++){
scanf("%d",&a[i]);}
i=n-1;
scanf("%d\n",&a[i]);
for(i=0;i<n;i++){
scanf("%d",&b[i]);}
for(i=0;i<n;i++){
if(b[i]>89)
c[i]=4.0*a[i];
else if(b[i]>84)
c[i]=3.7*a[i];
else if(b[i]>81)
c[i]=3.3*a[i];
else if(b[i]>77)
c[i]=3.0*a[i];
else if(b[i]>74)
c[i]=2.7*a[i];
else if(b[i]>71)
c[i]=2.3*a[i];
else if(b[i]>67)
c[i]=2.0*a[i];
else if(b[i]>63)
c[i]=1.5*a[i];
else if(b[i]>60)
c[i]=1.0*a[i];
else c[i]=0.0;}
for(i=0;i<n;i++){
s1=s1+a[i];
s2=s2+c[i];}
s=s2/s1;
printf("%.2f",s);
return 0;
}







