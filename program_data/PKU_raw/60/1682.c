int isPrime(int n)
{
   int sum=0;
   for(int i=2;i<n;i++){
       if(n%i==0){
          return 0;
          sum++;
          break;
       }
   }
   if(sum==0) return 1;
   else return 0;   
}
int main()
{
  int n, x, flag=0;
  scanf("%d",&n);
  for(x=3;x<n-1;x+=2)
  {
	if(isPrime(x)&&isPrime(x+2))
	   {
		printf("%d %d\n",x,x+2);
		flag++;
	}
  }
  if(!flag) printf("empty\n");
  return 0;
}