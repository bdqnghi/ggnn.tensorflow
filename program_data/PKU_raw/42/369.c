int main ()
{int n,b,c,d,e,f,g;
 scanf("%d",&n);
const int gro=n;
int a[gro];
for (b=0;b<=n-1;b++)
{scanf("%d",&a[b]);}
scanf("%d",&c);
f=0;
for(d=0;d<=n-1;d++)
{while (a[d]==c) 
  {for(e=d;e<=n-1;e++)
   {a[e]=a[e+1];
 }
f=f+1;}
}
for (g=0;g<n-f-1;g++)
{printf("%d ",a[g]);}
printf("%d",a[g]); 
}
