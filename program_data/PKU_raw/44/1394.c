int main()
{
int a,b,i;
int inverse(int num);
for(i=0;i<6;i++){
   scanf("%d",&a);
   if(a>=0){
   b=inverse(a);
   printf("%d\n",b);
     }else{
           b=inverse(a);
           printf("-%d\n",b);
           }      
   }
return 0;
}

int inverse(int num){
    int ge,shi,bai,qian,wan,num2,fu;
    if(num>=0){
              wan=(int)(num/1e4);
              qian=(int)((num-wan*1e4)/1000);
              bai=(int)((num-wan*1e4-qian*1e3)/100);
              shi=(int)((num-wan*1e4-qian*1e3-bai*1e2)/10);
              ge=(int)(num-wan*1e4-qian*1e3-bai*1e2-10*shi);
              if(10000<=num&&num<=99999){
              num2=(int)(wan+10*qian+1e2*bai+1e3*shi+1e4*ge);
                }else{
                      if(1000<=num&&num<=9999){
                        num2=(int)(qian+10*bai+1e2*shi+1e3*ge);
                        }else{
                              if(999>=num&&100<=num){
                                 num2=(int)(ge*1e2+shi*10+bai);
                                 }else{
                                       if(10<=num&&num<=99){
                                         num2=(int)(ge*10+shi);
                                         }else{
                                               num2=ge;
                                               }
                                       }
                              }
                      }
              }else{
              num=0-num;
              wan=(int)(num/1e4);
              qian=(int)((num-wan*1e4)/1000);
              bai=(int)((num-wan*1e4-qian*1e3)/100);
              shi=(int)((num-wan*1e4-qian*1e3-bai*1e2)/10);
              ge=(int)(num-wan*1e4-qian*1e3-bai*1e2-10*shi);
              if(10000<=num&&num<=99999){
              num2=(int)(wan+10*qian+1e2*bai+1e3*shi+1e4*ge);
                }else{
                      if(1000<=num&&num<=9999){
                        num2=(int)(qian+10*bai+1e2*shi+1e3*ge);
                        }else{
                              if(999>=num&&100<=num){
                                 num2=(int)(ge*1e2+shi*10+bai);
                                 }else{
                                       if(10<=num&&num<=99){
                                         num2=(int)(ge*10+shi);
                                         }else{
                                               num2=ge;
                                               }
                                       }
                              }
                      }
                    }
    return (num2);
    }
