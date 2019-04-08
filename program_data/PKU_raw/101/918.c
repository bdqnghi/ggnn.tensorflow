int main()
{int a,b,c,d,e,f;
  for(a=0;a<=2;a++)
  for(b=0;b<=2;b++)
  for(c=0;c<=2;c++)
   { d=(b>a)+(c==a);
     e=(a>b)+(a>c);
     f=(c>b)+(b>a);//????????? 
     if(a*b*c==0&&(a+b+c)==3&&(d+e+f)==3&&d*e*f==0)//????abcdef????????0,1,2??? 
      {if(a+d==2&&b+e==2&&c+f==2)//???????????????????? 
        {if(a>b>c)cout<<"C"<<"B"<<"A";//??a,b,c???????A,B,C 
         if(a>c>b)cout<<"B"<<"C"<<"A";
         if(b>a>c)cout<<"C"<<"A"<<"B";
         if(b>c>a)cout<<"A"<<"C"<<"B";
         if(c>a>b)cout<<"B"<<"A"<<"C";
         if(c>b>a)cout<<"A"<<"B"<<"C";
         }
       }
    }
  return 0;
}
