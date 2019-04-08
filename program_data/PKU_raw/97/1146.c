int main()
{
   int n,a=0,b=0,c=0,d=0,e=0,f=0;
   scanf("%d",&n);
   if(n/100!=0)
  {
     a=n/100;
     n=n-100*a;
     if(n/50!=0)
    {
      b=n/50;
      n=n-b*50;
    }
    if(n/20!=0)
    {
       c=n/20;
       n=n-c*20;
    }
    if(n/10!=0)
    {
       d=n/10;
       n=n-d*10;
    }
    if(n/5!=0)
    {
       f=n/5;
       n=n-f*5;
    }
   if(n/1!=0)
    {
       e=n/1;
       n=n-e*1;
    }
  }
  else
  {
      if(n/50!=0)
    {
      b=n/50;
      n=n-b*50;
    }
    if(n/20!=0)
    {
       c=n/20;
       n=n-c*20;
    }
    if(n/10!=0)
    {
       d=n/10;
       n=n-d*10;
    }
   if(n/5!=0)
    {
       f=n/5;
       n=n-f*5;
    }
   if(n/1!=0)
    {
       e=n/1;
       n=n-e*1;
    }
  }
  printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,f,e);
  return 0;
}
    


    