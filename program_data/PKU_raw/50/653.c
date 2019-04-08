int main()
{
    int m,w;
    scanf("%d",&w);
    for(m=1;m<=12;m++)
    {
        if(m==1){
              if((w+12)%7==5){
                 printf("1\n");
               }
               w+=12;
               w+=31;
         }
         else if(m==3||m==5||m==7||m==8||m==10||m==12){
               if(w%7==5){
                     printf("%d\n",m);
                }
                w+=31;
         }
         else if(m==2){
              if(w%7==5){
                   printf("2\n");
              }
              w+=28;
          }
          else if(m==4||m==6||m==9||m==11){
               if(w%7==5){
                    printf("%d\n",m);
;
                }
                 w+=30;
          }
     };

     return 0;
}







               