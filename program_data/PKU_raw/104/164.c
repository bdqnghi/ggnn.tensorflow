void main()
{
 int a,b,i,j,k,n,x[20],y[20];
 scanf("%d%d",&a,&b);
 x[0]=a,y[0]=b;
 for(i=1;i<15;i++)
 {
  if(a==1) goto loop;
  if(a%2!=0)
  {
   a=(a-1)/2;
   x[i]=a;
  }
  else if(a%2==0)
  {
   a=a/2;
   x[i]=a;
   }
 }
 loop:
 for(n=1;n<15;n++)
 {
  if(b==1) goto loap;
  if(b%2!=0)
  {
   b=(b-1)/2;
   y[n]=b;
  }
  else if(b%2==0)
  {
   b=b/2;
   y[n]=b;
   }
 }
  loap:
  for(j=0;j<i;j++)
  {
   for(k=0;k<n;k++)
   {
    if(x[j]==y[k])
   {
    printf("%d",x[j]);
    break;
   }
    }
if(x[j]==y[k])
   {
    break;
   }
  }
}