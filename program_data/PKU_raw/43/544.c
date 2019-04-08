 

int main()
{
 int prime(int );
 int m;
 scanf("%d",&m);
 int a,b;
 for(a=3;a<=m/2;a=a+2)
 {
  if(prime(a))
  {
   b=m-a;
   if(prime(b))
    printf("%d %d\n",a,b);
  }
 }
 
 return 0;
}

int prime(int n)
{
 int i,k=sqrt(n);
 for(i=2;i<=k;i++)
 {
  if(n%i==0) break;
 }
 if(i>k) return 1;
 else return 0;
}