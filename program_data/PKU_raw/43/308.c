int jss(int x);
int main(){
    int m,i;
    scanf("%d",&m);
    for(i=m-2;i>=m/2;i--){
                          if(jss(i)&&jss(m-i)){
                                               printf("%d %d\n",(m-i),i);                     
                          }                      
    }
    return 0;    
}
int jss(int x){
    int j;
    int a=0;
    for(j=x-1;j>=3;j--){
                        if(x%j==0){
                                   a=1;
                                   break;           
                        }                    
    }
    if(x%2==1&&a==0&&x!=1){
                     return 1;                 
    }
    else{
         return 0;
    }      
}
