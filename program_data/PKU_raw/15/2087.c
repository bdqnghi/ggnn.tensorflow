
int main()
{
   int n,i=0,a,sum=0,m;
   scanf("%d",&n);
   while(i<=n*n)
   {

	   scanf("%d",&a);
       i=i+1;
   if(a==0)
	   sum=sum+1;
   }
   m=sum*sum/16+1-sum/2;
   printf("%d\n",m);
   return 0;
}