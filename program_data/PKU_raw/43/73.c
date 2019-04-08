int shusu(int n)
{  int k;
   k=(int)sqrt(n);
   int i,t;
   if(n==3)
   return 0;
   else
  { for(i=3,t=0;i<=k;i=i+2)
   if(n%i==0)
   t=t+1;
   return t; 
}
}
main()
{     int n;
      scanf("%d",&n);
      int i;
      for(i=3;i<=n/2;i=i+2)
     {if(shusu(i)==0&&shusu(n-i)==0)
      printf("%d %d\n",i,n-i);                 
                       }
      
}
