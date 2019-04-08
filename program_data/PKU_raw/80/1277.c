 int main()
 {
     int a,b,c,d,e,f,x=0,i,j;
     scanf("%d %d %d",&a,&b,&c);
     scanf("%d %d %d",&d,&e,&f);
     if(a==d){
              if(b==e){
                       x=f-c;}
              else{
                   for(i=b;i<=e;i++){
                                     if(i==4||i==6||i==9||i==11){
                                                                 if(i==b){
                                                                          x=30-c;
                                                                          continue;}
                                                                  else {if(i==e){
                                                                          x=x+f;
                                                                          continue;}
                                                                 else{
                                                                      x=x+30;
                                                                      continue;}
                                                                      }}
                                    else{ if(i==2){
                                               if(i==b){
                                                        x=28-c;
                                                        continue;
                                                        }
                                               else {if(i==e){
                                                        x=x+f;
                                                        continue;
                                                        }
                                               else{
                                                    x=x+28;
                                                    continue;
                                                    }}
                                             }
                                     else{
                                          
                                          if(i==b){
                                                   x=31-c;
                                                   continue;}
                                          if(i==e){
                                                   x=x+f;
                                                   continue;
                                                   }
                                          else{
                                               x=x+31;
                                               continue;}
                                          }}
                                   
                                     }
                  if(((a%4==0&&a%100!=0)||(a%400==0))&&(b<=2)&&(e>2))
                  x++;
                  
                  }
                  }
      else{
           for(j=a;j<=d;j++){
                             if(j==a){
                                     for(i=b;i<=12;i++){
                                                       
                                     if(i==4||i==6||i==9||i==11){
                                                                 if(i==b){
                                                                          x=30-c;
                                                                          continue;}
                                                                 else{
                                                                      x=x+30;
                                                                      continue;}
                                                                      }
                                     else {if(i==2){
                                               if(i==b){
                                                        x=28-c;
                                                        continue;}
                                               else{
                                                    x=x+28;
                                                    continue;}
                                             }
                                     else{
                                          if(i==b){
                                                   x=31-c;
                                                   continue;}
                                          else{
                                               x=x+31;
                                               continue;}
                                          }}
                                     }
                  if(((a%4==0&&a%100!=0)||(a%400==0))&&(b<=2))
                  x++;
  
                  }
                   else {
                        
                         if(j==d){
                            for(i=1;i<=e;i++){
                                                                                     if(i==4||i==6||i==9||i==11){
                                                                 if(i==e){
                                                                          x=x+f;
                                                                          continue;}
                                                                 else{
                                                                      
                                                                      x=x+30;
                                                                       
                                                                      continue;}
                                                                      }
                                    else{ if(i==2){
                                               if(i==e){
                                                        x=x+f;
                                                        continue;}
                                               else{
                                                    x=x+28;
                                                    continue;}
                                             }
                                     else{
                                          if(i==e){
                                                   x=x+f;
                                                   continue;}
                                          else{
                                               x=x+31;
                                               continue;}
                                          } }    
                             
                             }
                             if(((d%4==0&&d%100!=0)||(d%400==0))&&(e>2))
                             x++;
                            
                             }
      else{
          
           if((j%4==0&&j%100!=0)||(j%400==0)){
                                              x=x+366;
                                              
                                              continue;}
                                              else{
                                              x=x+365;
                                              continue;}
                                              }}
             }
            
             }
     printf("%d",x);
     return 0;
     }          
                             
                             
                             
                             
                             
                             
                             
                             
                             
                             
                                                     
                                                     
                                                     
