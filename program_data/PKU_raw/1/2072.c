int num;
main()
{
      void fenjie(int x,int qi);
      int n,k,a;
      scanf("%d",&n);
      for(k=1;k<=n;k++)
      {
          num=0;
          scanf("%d",&a);
          fenjie(a,2);
          printf("%d\n",num);
      }
}
void fenjie(int x,int qi)
{
      if(x==1) num++;
      else
      {
         for(int i=qi;i<=x;i++)
         {
              if(x%i==0) fenjie(x/i,i);
         }
      }
}