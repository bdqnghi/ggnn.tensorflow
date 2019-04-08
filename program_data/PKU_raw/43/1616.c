
main()
{
      int m,a,b,k,s;
      
      scanf("%d",&m);
      for(a=3;a<=(m/2);a=a+2)
      {
        for(k=3;k<a;k=k+2)
        {if(a%k==0)
        {a=a+2;
        k=3;}}
        
        
        b=m-a;
        if(b>=a)
        {
        s=0;
        for(k=3;k<b;k=k+2)
        {if(b%k==0)
        s=s+1;}
  
        
        if(s==0)
        printf("%d %d\n",a,b);
        }
        
        }
      
      
      


}
