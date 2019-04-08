
main()
{
int n,k,i,m,j;
scanf("%d%d",&n,&k); 
for(i=n+k;;i++)
{
   m=i;
   for(j=1;j<=n;j++)
   {
    if((m-k)%n!=0||m-k<=0)  break;
    else m=(m-k)/n*(n-1);
      if(j==n)
      {
           printf("%d",i);
           goto loop;
      }
      
   }
}
loop: printf("\n");
}
