int main()
{
   int i,j,n,p[50000];
   scanf("%d",&n);
   for(i=3;i<n;i++)
   {
	   int a=0;
	   for(j=2;j<=sqrt(i);j++)
	   {
		   if(i%j==0)  
		   {
			   a=1;
			   break;
		   }
	   }
	   if(a==0)  p[i]=i;
   }
   for(int h=6;h<=n;h=h+2)
   {
       int b,c;
	   for(b=3;b<=h/2;b=b+2)
	   {
	       c=h-b;
		   if(p[c]==c&&p[b]==b){
			   printf("%d=%d+%d\n",h,b,c);
			   break;
		   }
	   }
   }
   return 0;
}