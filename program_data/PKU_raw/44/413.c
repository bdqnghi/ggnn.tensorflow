int reverse(int n){
    int i,num[1000],k=0,a=0,sign=0;
    if(n<0){
            n=n*(-1);
            sign=1;
            }
    for(;n>0;){
      num[k++]=n%10;
      n=n/10;          
      }
    //for(i=0;i<k;i++) printf("%d ",num[i]); 
       
    for(i=0;i<k;i++){
        a+=num[i]*pow(10,k-i-1);         
        }    
    if(sign==1) a=a*(-1);
    return a; 
    }
    
int main(){
    int i,n,result;
    for(i=0;i<6;i++){
        scanf("%d",&n);
        result=reverse(n);
        printf("%d\n",result);
        }
    scanf("%d",&i);
    return 0;
    }
