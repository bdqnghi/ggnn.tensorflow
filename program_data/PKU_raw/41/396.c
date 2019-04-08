int main() //?????
{
 int a,b,c,d,e;
 for(a=1;a<=5;a++)
   for(b=1;b<=5;b++)
     if(a!=b)
       for(c=1;c<=5;c++)
         if(c!=a&&c!=b)
           for(d=1;d<=5;d++)
             if(d!=a&&d!=b&&d!=c)
               for(e=1;e<=5;e++)
                 if(e!=a&&e!=b&&e!=c&&e!=d) //??abcde?1?5??
                   if(e!=2&&e!=3)
                     {int s[5];
                      s[a-1]=(e==1);
                      s[b-1]=(b==2);
                      s[c-1]=(a==5);
                      s[d-1]=(c!=1);
                      s[e-1]=(d==1); //????????????
                      if(s[0]+s[1]==2&&s[2]+s[3]+s[4]==0)
                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
 return 0;
} //????
