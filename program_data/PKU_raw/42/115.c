main()
{
  int a=1,n,k,i[100001];
  scanf("%d",&n);
  for(a=1;a<=n;a++) scanf("%d ",&i[a]);
  scanf("%d",&k);
  for(a=1;a<=n;)
  {
         while(i[a]==k)
         {a++;
          if(i[a]!=k) break;
          }
         printf("%d",i[a]);
         a=a+1;
         for(;a<=n;a++)
         if(i[a]!=k) printf(" %d",i[a]);
  }
  return(0);
}