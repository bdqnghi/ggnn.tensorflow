int main()
{
         int n,a,b,c,e,f,d;
         scanf("%d",&n);
         a=n/100;
         
         if(n>=100){
         b=(n-100*a)/50;
         c=(n-100*a-50*b)/20;
         d=(n-100*a-50*b-20*c)/10;
         e=(n-100*a-50*b-20*c-10*d)/5;
         f=n-100*a-50*b-20*c-10*d-5*e;
         }
         else if(n>=50){
         b=1;
         c=(n-50)/20;
         d=(n-50-20*c)/10;
         e=(n-50-20*c-10*d)/5;
         f=n-50-20*c-10*d-5*e;
         }
         else if(n>=20){
         b=0;
         c=n/20;
         d=(n-20*c)/10;
         e=(n-20*c-10*d)/5;
         f=n-20*c-10*d-5*e;
         }
         else if(n>=10){
          b=0;    
         c=0;
         d=1;
              d=(n-10)/5;
         f=n-10-5*e;
         }
         else if(n>=5){
           b=0;    
         c=0;
         d=0;    
          e=1;
              f=n-5;
              }
         else if(n<5){
           b=0;    
         c=0;
         d=0;    
          e=0;  
         f=n;
         }
         printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
         return 0;
}        