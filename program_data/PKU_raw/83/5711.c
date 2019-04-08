int main()
{
    int i,n,s;
    double ds=0;
    s=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    double c[n];
    double d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&(a[i]));
    }
     for(i=0;i<n;i++)
     {
         s=s+a[i];
     }
     for(i=0;i<n;i++)
     {
         scanf("%d",&b[i]);
         if (b[i]<=100&&b[i]>=90) {c[i]=4.0;}
         else if(b[i]<=89&&b[i]>=85) {c[i]=3.7;}
         else if(b[i]<=84&&b[i]>=82) {c[i]=3.3;}
         else if(b[i]<=81&&b[i]>=78) {c[i]=3.0;}
         else if(b[i]<=77&&b[i]>=75) {c[i]=2.7;}
         else if(b[i]<=74&&b[i]>=72) {c[i]=2.3;}
         else if(b[i]<=71&&b[i]>=68) {c[i]=2.0;}
         else if(b[i]<=67&&b[i]>=64) {c[i]=1.5;}
         else if(b[i]<=63&&b[i]>=60) {c[i]=1.0;}
         else if(b[i]<60){c[i]=0;}
         d[i]=1.0*a[i]*c[i];
     }
     for(i=0;i<n;i++)
     {
        ds=ds+d[i]; 
     }
     printf("%.2lf",1.0*ds/s);
    return 0;
}
