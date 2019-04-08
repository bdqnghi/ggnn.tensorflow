int main()
{
   int a;
   int b;
   int c;
   int d;
   int e;
   for(a=1;a<=5;a++)
   {
      for(b=1;b<=5;b++)
      {
         if(b==a)
         continue;
        
         for(c=1;c<=5;c++)
         
         {if((c==a)||(c==b))
             continue;
             for(d=1;d<=5;d++)
             {
                  if((d==a)||(d==b)||(d==c))
                  continue;
                  for(e=1;e<=5;e++)
                  {if((e==a)||(e==b)||(e==c)||(e==d))
                  {continue;}
                  if((e==1&&a!=2)||(b!=2)||(a==5&&((c==3)||(c==4)||(c==5)))||(a!=5)||(c!=1&&((d==3)||(d==4)||(d==5)))||(d==1&&((e==3)||(e==4)||(e==5)))||(e==2||e==3))
                      {break;}
                      else
                      cout<<a<<" ";
                      cout<<b<<" ";
                      cout<<c<<" ";
                      cout<<d<<" ";
                      cout<<e;
                      }}}}}
                      return 0;
                      }
