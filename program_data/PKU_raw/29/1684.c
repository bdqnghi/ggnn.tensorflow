int main()
{
   int m,n,i;
   int  a[100]; 
   double sum=0;
   a[1]=1;
   a[2]=2;
   for (i=3;i<=100;i++) a[i]=a[i-1]+a[i-2];
   scanf("%d",&m);
   while(m>0)
   {
       scanf("%d",&n);
	   for (i=1;i<=n;i++) sum+=(double)a[i+1]/a[i];
	   printf("%.3lf\n",sum);
	   sum=0;
	   m--;
   }
   return 0;
}
