int main()
{
int a,b,c,d,e,A,B,C,D,E,worda,wordb,wordc,wordd,worde;
for(a=1;a<=5;a++)
   for(b=1;b<=5;b++)
      for(c=1;c<=5;c++)
         for(d=1;d<=5;d++)
            for(e=1;e<=5;e++)
              {
                 worda=(e==1);
                 wordb=(b==2);
                 wordc=(a==5);
                 wordd=(c!=1);
                 worde=(d==1);
                 A=(worda==1&&(a==1||a==2)||worda==0&&a!=1&&a!=2);
                 B=(wordb==1&&(b==1||b==2)||wordb==0&&b!=1&&b!=2);
                 C=(wordc==1&&(c==1||c==2)||wordc==0&&c!=1&&c!=2);
                 D=(wordd==1&&(d==1||d==2)||wordd==0&&d!=1&&d!=2);
                 E=(worde==1&&(e==1||e==2)||worde==0&&e!=1&&e!=2);
                 if(A==1&&B==1&&C==1&&D==1&&E==1&&e!=2&&e!=3&&a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
                    {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
                      return 0;
                      }                 
                 }
   return 0;
                 
    
    }