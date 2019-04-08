int min(int a,int b)
{
    if(a>=b)
    return b;
    else
    return a;
}

  
  int f(int a,int b)
{ 
    int count=0;
    int k[32768]={0};
    if(a==1)
    return 1;
    else
    {
    int i,j;
    for(i=min(a,b);i>=2;i--)
    {                     
        if(a%i==0)
        k[i]=i; 
    }
    for(j=0;j<32768;j++)
    {
         if(k[j]!=0)
         {
         count=count+f(a/k[j],j);
         k[j]=0;
         }
    }
    return count; 
    }
}
main()
{
      int n,i,a,number;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
      scanf("%d",&a);
      number=f(a,a);
      printf("%d\n",number);
      }
}
