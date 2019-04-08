int main()
{
 int n,i,sum=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
   if(i%7!=0)
     if((i-7)%10!=0)
       if(i-70<0||i-70>=10) 
           sum+=i*i;
   printf("%d",sum);
  return 0;
}
