	int main()
	{
	    int n,m,a,b,p,q;
	    scanf("%d",&n);
	    if(n<5)
	    {
	      printf("empty");
            }
	    else
	    a=3;
	    b=a+2;
	    m=2;
	    while(b<=n)
	    {
	      while(m<=a-1)
	      {  
	      p=a%m;
	      q=b%m;
              if(b>n)
              break;
              else
	      if(p==0||q==0)
	      {
	        a=a+1;
	        b=a+2;
	        m=2;
               } 
	       else 
	        m=m+1;
	      }
              if(b>n)
              break;
              else
              printf("%d %d\n",a,b);
              a=a+1;
              b=b+1;
              m=2;
             }
             return 0;
         }