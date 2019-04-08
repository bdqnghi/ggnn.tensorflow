int isprime(int i)
{
   int j,k;
   k=sqrt(i);
   if(i==1)  return 0;
   for(j=2;j<=k;j++)
      if(i%j==0)
         return 0;
   if(j>k)   return 1;
}
void main()
{
	int n,i,s=0;
	scanf("%d",&n);
	for(i=2;i<(n-1);i++)
		if(isprime(i)&&isprime(i+2))
		{
			printf("%d %d\n",i,i+2);
			s=1;
		}
	if(s==0)  printf("empty\n");
}