int prime(int a)  //a must be an odd.
  {
  int k,m;
  m=1;
   for(k=3;k<=sqrt(a);k++)
      if(a%k==0)
	  {
	   m=0;
	   break;
	  }
   return m;
   }
int main()
{
 int n,i,j;
 scanf("%d",&n);
 for(i=6;i<=n;i+=2) 
 {
   for(j=3;j<i;j+=2)
      if(prime(j)==1&&prime(i-j)==1)
	    {
		  printf("%d=%d+%d\n",i,j,i-j);
		  break;
		}
 }
}