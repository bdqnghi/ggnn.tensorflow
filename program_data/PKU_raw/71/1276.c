int isRunNian(int year);
int main(){
    int n,d,s[200][100],e;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
		d=0;
       for(int k=0;k<3;k++){
       scanf("%d",&(s[i][k]));
        }
       if((s[i][1])>(s[i][2])){
        e=s[i][1];
        s[i][1]=s[i][2];
        s[i][2]=e;
        }
        for(int m=(s[i][1]);m<(s[i][2]);m++){
        if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)){
           d += 31;
		} else if((m==4)||(m==6)||(m==9)||(m==11)){
           d += 30;
        }else if(m==2){
            if(isRunNian(s[i][0])){
             d += 29;
            }else{
              d += 28;
        }
       }
       }
         if((d%7)==0){
             printf("YES\n");
         }else{
        printf("NO\n");
     }
     }
      return 0;
 }
    int isRunNian(int year){
     int result;
    if((year%400==0)||((year%4==0)&&(year%100!=0))){
    result = 1;
    }else{
     result = 0;
   }
     return result;
}
     
 
   
  
  
   
