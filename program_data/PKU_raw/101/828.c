int main()
{
int a,b,c,judgea,judgeb,judgec,ta,tb,tc;
for(a=1;a<=3;a++)
   for(b=1;b<=3;b++)
      for(c=1;c<=3;c++)
         {
          ta=(b>a)+(c==a);
          tb=(a>b)+(a>c);
          tc=(c>b)+(b>a);
          if((a-b)*(ta-tb)<0||a==b&&ta==tb)
             judgea=1;
          if((a-c)*(ta-tc)<0||a==c&&ta==tc)
             judgeb=1;
          if((b-c)*(tb-tc)<0||b==c&&tb==tc)
             judgec=1;
          if(judgea==judgeb&&judgeb==judgec)
          {
          if(a<=c&&a<=b)
              if(b<=c)
                  cout<<'A'<<'B'<<'C';
                  else
                      cout<<'A'<<'C'<<'B';
          if(b<=c&&b<=a)
              if(c<=a)
                   cout<<'B'<<'C'<<'A';
                   else
                       cout<<'B'<<'A'<<'C';
          if(c<=b&&c<=a)
               if(b<=a)
                     cout<<'C'<<'B'<<'A';
                     else
                        cout<<'C'<<'A'<<'B';
        a=b=c=9;
        }
	   }
return 0;
	
          
}