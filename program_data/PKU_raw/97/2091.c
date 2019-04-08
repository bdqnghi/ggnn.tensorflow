int main()
{
   int money[10],sum[10];
   int k,i,j;
   scanf("%d",&k);
   money[1]=100;
   money[2]=50;
   money[3]=20;
   money[4]=10;
   money[5]=5;
   money[6]=1;
   for(i=1;i<=6;i++)
    sum[i]=0;
   for(i=1;i<=6;i++)
    {
      while(k>=money[i])
       {
         k=k-money[i];
         sum[i]++;
        }
       printf("%d\n",sum[i]);
     }   
    return 0;
}