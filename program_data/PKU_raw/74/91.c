int su(int a)
{
      int i;
      for(i=2;i<=sqrt(a);i++)
 {
  if(a%i==0)
  {
  break;}
 }
 if(i>sqrt(a))
 {return(1);}
 else {return(0);}
}
int hui(int b)
{
 int a[10]={0},n=0,i=0,j=0,l,z=b;
 for(;;)
 {
  a[i]=b%10;
  i++;
  b=b/10;
  if(b==0){break;}
 }
 for(l=0;l<i;l++)
 { 
  n=10*n+a[l];
  
 }
 if(n==z)
 {
  return(1);
 }
 else
 {
  return(0);
 }
}
void main()
{
 int m,n,i,a[100000]={0,0},b=0,c=0,z,d=0;
 scanf("%d%d",&m,&n);
 for(i=m;i<=n;i++)
 {
  if((su(i)==1)&&(hui(i)==1))
  {a[b]=i;b++;}
 }
 for(i=m;i<=n;i++)
 {
  if(hui(i)==1)
  {
   c=1;break;
  }
 }
 if(c==0)
 { printf("no\n");}
for(i=m;i<=n;i++)
 {
  if(su(i)==1)
  {
   d=1;break;
  }
 }
if(d==0)
 { printf("no\n");}
 if(b!=0)
 {printf("%d",a[0]);
 for(z=1;z<b;z++)
 {printf(",%d",a[z]);
 }}
 else
 {printf("no");}
 printf("\n");
 
}
