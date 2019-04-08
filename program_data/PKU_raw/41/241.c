int main()
{
    int a,b,c,d,e,a1,b1,c1,d1,e1;
    int A,B,C,D,E;
    for(a=1;a<=5;a++)
    {
       for(b=1;b<=5;b++)
       {
          if(b!=a)
          {
             for(c=1;c<=5;c++)
             {
                 if(c!=a&&c!=b)
                 {
                    for(d=1;d<=5;d++)
                    {
                       if(d!=a&&d!=b&&d!=c)
                       {
                          for(e=1;e<=5;e++)
                          {
                              if(e!=a&&e!=b&&e!=c&&e!=d)
                              {
                                  A=(e==1);
                                  B=(b==2);
                                  C=(a==5);
                                  D=(c!=1);
                                  E=(d==1);  
                                  if((a+A)*(b+B)*(c+C)*(d+D)*(e+E)==360&&(a+A+b+B+c+C+d+D+e+E)==17)
                                  {
                                     a1=a;
                                     b1=b;
                                     c1=c;
                                     d1=e;
                                     e1=d;                                                                 
                                  }                       
                              }                 
                          }                    
                       }                 
                    }              
                 }                 
             }        
          }                 
       }                 
    }
    cout<<a1<<" ";
    cout<<b1<<" ";
    cout<<c1<<" ";
    cout<<d1<<" ";
    cout<<e1<<endl; 
    return 0;    
}