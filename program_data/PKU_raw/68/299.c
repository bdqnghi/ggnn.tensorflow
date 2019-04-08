
int main()
{
 int n,i,j,pd(int x);
 scanf ("%d",&n);
 for (i=6;i<=n;i+=2)
  {
   for (j=3;j<=0.5*i;j=j+2)
   {
    if (pd(j) && pd(i-j)) 
    {
     printf("%d=%d+%d\n",i,j,i-j);
     break;
    }
     
   }
  }
}
int pd(int x)
{
 int i;
 float y;y=x;
 for (i=3;i<=(int)sqrt(y);i+=2)
  {
   if (x%i==0) return 0;
  }
 return 1;
}