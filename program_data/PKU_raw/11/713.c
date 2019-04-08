
int RunNian(int y)
     {
        int result ;
         if (y%4==0 && y%100!=0|| y%400==0)
         {
                    result=1;
         }
         else
         {
            result=0;
         }
         return result;
     }
         
int DiJiTian(int y,int m,int d)
     {
         int result=0;
          for (int i=1;i<m;i++)
          {
              if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                {
                  result+=31;                                                          
                }
              else if(i==4||i==6||i==9||i==11)
                {
                  result+=30;                           
                }
              else if(i==2)
                {
                   if(RunNian(y)) 
                     {
                      result+=29;
                     }     
                    else
                      {
                       result+=28;
                      }  
                }
          }
          
          result+= d;
          return result; 
     }
        
int main()
{

     int y2,m2,d2,a,e;
     int T=0;
    
       scanf("%d%d%d",&y2,&m2,&d2);
          
          T+= DiJiTian(y2,m2,d2);          
           printf ("%d\n",T);
return 0;
}