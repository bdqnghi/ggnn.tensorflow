void main()
{
 int check(int n);
 int n,i,j;
 scanf("%d",&n);
 n=n/2*2;
 for(i=6;i<=n;i++,i++)
 {
  for(j=2;j<=(i/2);j++)
  {
   if(check(j)==1&&check(i-j)==1)
   {
    printf("%d=%d+%d\n",i,j,i-j);
    break;
   } 
  }
 }
}

int check(int n)
{
 int k,i;
 k=sqrt(n);
 for(i=2;i<=k;i++) 
  {
  	if(n%i==0)
  	{
  	 return(-1);
  	 break;
  	}
  }
 if(i==(k+1))
 return(1);
}