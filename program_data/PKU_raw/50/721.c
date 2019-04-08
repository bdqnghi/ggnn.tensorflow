int main(){
   int w,i,yue,tian,day;
      scanf("%d",&w);
       for(i=1;i<=365;i++){
           tian=i;
              if(i>=1&&i<=31){
                tian=i;
                yue=1;
              }else if(i>31&&i<=59){
                tian=i-31;
                yue=2;
              }else if(i>59&&i<=90){
                tian=i-59;
                yue=3;
              }else if(i>90&&i<=120){ 
                tian=i-90;
                yue=4;
              }else if(i>120&&i<=151){
                tian=i-120;
                yue=5;
              }else if(i>151&&i<=181){
                tian=i-151;
                yue=6;
              }else if(i>181&&i<=212){
                tian=i-181;
                yue=7;
              }else if(i>212&&i<=243){
                tian=i-212;
                yue=8;
              }else if(i>243&&i<=273){
                tian=i-243;
                yue=9;
              }else if(i>273&&i<=304){
                tian=i-273;
                yue=10;
              }else if(i>304&&i<=334){
                tian=i-304;
                yue=11;
              }else if(i>334&&i<=365){
                tian=i-334;
                yue=12;
              }         
               
                  day=(i+w-1)%7;
            if(tian==13&&day==5){
                printf("%d\n",yue);
              }
          }
              return 0;
      }