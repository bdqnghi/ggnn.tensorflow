/*?? - ??(10.1) ????	
??
??????????
????
?????????????a(0 < a < 3000)?
????
???????a??????Y?????N?
????
2006
????
N*/
int main()

{   int just(int y);


  
    int y, m ,d , t=0;
  
    cin >> y >> m >> d;
 int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
 int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
   if( just (y) == 1)
    {if(m == 1)
     t = 0;
     else
     for(int i = 0; i <= m-2 ; i ++)
     t+=b[i];
   
     } 
      else
    {if(m == 1)
     t = 0;
     else
     for(int i = 0; i <= m-2 ; i ++)
     t+=a[i];
   
     } 
     cout<<t+d;
 
     return 0;
     }
     
     
     int just(int y)
   { int m=0;
   
    if(y%4 == 0 && y%100!=0)
    {return 1;
    }
    if(y%400 == 0)
    {return 1;   }
     return 0;}
    
