void main()
{
  long a,m,n,i,p,q,b,c;
  scanf("%ld",&a);
  i=6;
  m=3;
  
  while (i<=a)  
	   
       { 
	    while (m<=i/2)
               { q=3;
                 while(q<=sqrt(m))
                      {
                       c=m%q;
                       if(c!=0){q=q+1;}
                       else {m=m+2;q=3;}
                      }
               
    
    
                p=2;
                n=i-m;
                while (p<=sqrt(n))
                      {
                       b=n%p;
                       if (b==0) break;
                       else p=p+1;
                      }
         if (b!=0) {printf("%ld=%ld+%ld\n",i,m,n);break;}
         else m=m+2;
        }
      i=i+2;
	  m=3;
      }
}
