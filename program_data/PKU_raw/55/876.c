
long C(long Z,long X)
{     long V;
      if (X==0)
      V=1;
      else
      {
      V=1;
      for(long B=1;B<=X;B++)
      V=V*Z;
      }
      return V;
      
}
main()
{
    char q;
  int d=0;
    long o,a,b,p,k,h,i,t;
    char n[20],l,g;
      scanf("%d %s %d",&a,n,&b);
      o=strlen(n);
      long m[o];
    for(k=0;k<=o-1;k++)
    {
    l=n[k];
    if(('9'-l>=0)&&('0'-l<=0))
    l=l-'0';
    else
    {
    if((l<=96)&&(l>=10))
    l=l-55;
    else 
    {
    if(l>=97)
    l=l-87;
    }
    }
    m[k]=l;
    }

    
    p=0;
    for(k=0;k<=o-1;k++)
    {long s=o-k-1;
    p=p+(m[k])*(C(a,s));
    }
    
    if(p==0)
    printf("0");
    
    if(b>=10)
{   
    for(int j=9;j>=0;j--)
    {
            
            t=p/(C(b,j));
            p=p-t*C(b,j);
            if(t!=0||d!=0)
        {
            if(t>=10&&t<=50)
            {
            g=t+55;
            printf("%c",g);
            }
            else
            printf("%d",t);
            d++;
        }
    }
}
    else
{  
    for(int j=20;j>=0;j--)
    {
            
            t=p/(C(b,j));
            p=p-t*C(b,j);
            if(t!=0||d!=0)
        {
            if(t>=10&&t<=50)
            {
            g=t+55;
            printf("%c",g);
            }
            else
            printf("%d",t);
            d++;
        }
    }
}
                   
    getchar();
    getchar();
}

