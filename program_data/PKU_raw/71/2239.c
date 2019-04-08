
int isRunNian(int year);
int main(){
    int n;
    scanf("%d",&n);
    int year[200],month1[200],month2[200],chaju[200]={0,0,0,0};
    int i,e,k;
    for(i=0;i<n;i++){
                     scanf("%d%d%d",&year[i],&month1[i],&month2[i]);
                     if(month1[i]>month2[i]){
                                             e=month1[i];
                                             month1[i]=month2[i];
                                             month2[i]=e;
                                             }
                     
                     if(isRunNian(year[i])){
                                      for(k=month1[i];k<month2[i];k++){
                                                                       if(k==1||k==3||k==5||k==7||k==8||k==10||k==12){
                                                                                                                      chaju[i]+=31;
                                                                                                                      }
                                                                       else if(k==2){
                                                                                chaju[i]+=29;
                                                                                }
                                                                       else if(k==4||k==6||k==9||k==11){
                                                                                                   chaju[i]+=30;
                                                                                                   }
                                                                         }
                                                                         }
                                                                                                   else  {
                                       for(k=month1[i];k<month2[i];k++){
                                                                       if(k==1||k==3||k==5||k==7||k==8||k==10||k==12){
                                                                                                                      chaju[i]+=31;
                                                                                                                      }
                                                                       else if(k==2){
                                                                                chaju[i]+=28;
                                                                                }
                                                                       else if(k==4||k==6||k==9||k==11){
                                                                                                   chaju[i]+=30;
                                                                                                   }
                                                                       }
                                                                       }
                     if(chaju[i]%7==0){
                                       printf("YES\n");
                                       }
                     else{
                          printf("NO\n");
                          }
    }
                                                                                                                      
                                                                                              
                                            
                                            
  
                   
                     return 0;
                     }
                     
                     

int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
