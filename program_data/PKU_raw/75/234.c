int main()
{
 int a[1000],i,j,b[1000],n,min=2000,max=0,ren=0,r;
 char c;
 for(i=0;;)
  {
   scanf("%d%c",&a[i],&c);
   if(c==',') {n=i;i++;}
    else break;
  }
 n=n+2;
 for(i=0;;)
  {
   scanf("%d%c",&b[i],&c);
   if(c==',') i++;
    else break;
  }
 for(i=0;i<n;i++)
  {
  if(a[i]<min) min=a[i];
  if(b[i]>max) max=b[i];
  }
 for(i=min;i<=max;i++)
  {
  r=0;
  for(j=0;j<n;j++)
   if(a[j]<=i && b[j]>i) r++;
  if(r>ren) ren=r;
  }
 printf("%d %d",n,ren);
 return 0;
}
