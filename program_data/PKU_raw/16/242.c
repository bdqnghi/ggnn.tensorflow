int main()
{
   int n;
   int tmp;
   scanf("%d",&n);
   while(1){
	   tmp=n%10;
	   printf("%d",tmp);
	   if(!(n=n/10))break;
   }
   printf("\n");
   return 0;
}