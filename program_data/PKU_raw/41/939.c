int main()
{
   int a,b,c,d,e,as,bs,cs,ds,es;
   for(a=1;a<=5;a++)
     for(b=1;b<=5;b++)
        for(c=1;c<=5;c++)
           for(d=1;d<=5;d++)
               for(e=1;e<=5;e++)
                 {
                    as=(e==1);
                    bs=(b==2);
                    cs=(a==5);
                    ds=(c!=1);
                    es=(d==1);
                    if(as+bs+cs+ds+es==2)
                     {
                          if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=e&&b!=d&&c!=d&&c!=e&&d!=e&&e!=2&&e!=3)
                            {
                               if(as==1&&a!=1&&a!=2) continue;
                               else if(bs==1&&b!=1&&b!=2) continue;
                               else if(cs==1&&c!=1&&c!=2) continue;
                               else if(ds==1&&d!=1&&d!=2) continue;
                               else if(es==1&&e!=1&&e!=2) continue;
                               else cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
                              }
                      }
                }
        return 0;
}
                              
