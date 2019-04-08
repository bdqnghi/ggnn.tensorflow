int main()
{
   int n,week=0;
   scanf("%d",&n);
   int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   int i,day[13],sum=0;
   for(i=1;i<=12;i++)
   {
	   day[i]=sum+13;
	   sum+=d[i];
	   week=(day[i]%7+n-1)%7;

	   if(week==5) printf("%d\n",i);
   }
   return 0;
}

