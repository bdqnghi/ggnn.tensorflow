void main()
{
      long n,a,b,y1,y2,i,j;
      scanf("%ld",&n);
      for(i=6;i<=n;i=i+2)
      {     
            for (a=3;a<=i-3;a=a+2)  
               {  b=i-a;
                       if(a%2==0)    y1=0; 
                       else
                           {
                             y1=1;
                             for(j=3;j<=sqrt(a);j=j+2)
                             if (a%j==0) {y1=0;break;}
                              
                           }
                       
                       
                       if(b%2==0)    y2=0;
                       else 
                           { 
                             y2=1;
                             for(j=3;j<=sqrt(b);j=j+2)
                             if (b%j==0) {y2=0;break;}
                             
                           }               
                       if (y1*y2==1)  
                             {printf("%ld=%ld+%ld\n",i,a,b);break;}
               }
                       
      }
      
}
