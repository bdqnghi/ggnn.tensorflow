int main()
{
   int a,b,c,sum=0;
   int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   scanf("%d%d%d",&a,&b,&c);
   for(int i=0;i<b;i++)
   {
       sum=sum+month[i];
   }
   sum=sum+c;
   if(a%4==0&&a%100!=0||a%400==0)   sum=sum+1;
   printf("%d\n",sum);
   return 0;
}