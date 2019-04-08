int main()
{
   int a,b,c,d,e,f,g;
   scanf("%d",&a);
   if(a>10000){
      b= a/10000;
      c= (a-10000*b)/1000;
      d= (a-10000*b-1000*c)/100;
      e= (a-10000*b-1000*c-100*d)/10;
      f= a%10;
      g= f*10000+e*1000+d*100+c*10+b;
      printf("%d",g);
          }
    else if(a>1000&&a<10000){
       b= a/1000;
       c= (a-1000*b)/100;
       d= (a-1000*b-100*c)/10;
       e= a%10;
       g= e*1000+d*100+c*10+b; 
       printf("%d",g);
          }
    else  if(a>100&&a<1000){
        b=a/100;
        c=(a-b*100)/10;
        d =a%10;
        g = d*100+10*c+b;
        printf("%d",g);
           }
      else if(a>10&&a<100)
          {
             b=a/10;
             c=a%10;
             g=c*10+b;
             printf("%d",g);
           }
      else if(a>1&&a<10)
           {
              g=a;
             
            printf("%d",g);
             }
  return 0;
}
