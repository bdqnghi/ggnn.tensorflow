void main()
{
  int a1,a2,a3,a4,a5,m,n;
  scanf("%d",&m);
  a1=m%10;
  a2=(m%100)/10;
  a3=(m%1000)/100;
  a4=(m%10000)/1000;
  a5=(m%100000)/10000;
  if (a5!=0)
   { n=a1*10000+a2*1000+a3*100+a4*10+a5;}
  else
   {
     if(a4!=0){n=a1*1000+a2*100+a3*10+a4;}
     else
         {
           if(a3!=0){n=a1*100+a2*10+a3;}
           else
             {if (a2!=0){n=a1*10+a2;}
               else
                  {if(a1!=0){n=a1;}
                   else
                      n=0;
                   }
             }
          }
     }
     
  printf("%d",n);
}
