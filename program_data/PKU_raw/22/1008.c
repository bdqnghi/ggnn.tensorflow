int main()
{
 int a[300],i,j,c;
  for(i=1;i<300;i++)
 {a[i]=-10000;}
 scanf("%d",&a[0]);
 for(i=1;i<300;i++)
{scanf(",%d",&a[i]);}
 if(a[1]==-10000) puts("No");
 else
 {for(i=1;i<300;i++)
{if(a[i]<=a[i-1]) {c=a[i];a[i]=a[i-1];a[i-1]=c;}}
 for(i=0;i<300;i++)
{if(a[i]==a[299]) a[i]=0;}
  for(i=1;i<300;i++)
{if(a[i]<=a[i-1]) {c=a[i];a[i]=a[i-1];a[i-1]=c;}}
 if(a[299]==0)  puts("No");
 else printf("%d",a[299]);
}}

