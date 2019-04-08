
int re(int num){
    int sz[30],i,value,x;
    value=1;
    i=0;
    if(num<0) {num=-num;value=-1;}
    for(int j=0;j<30;j++) sz[j]=0;
    while(num>0) {
                 sz[i++]=num%10;
                 num=num/10;
                 }
    for(i=29;i>=0;i--){
                       if(sz[i]!=0){
                                    x=i;
                                    break;
                                    }
                       }
    for(i=0,num=0;i<=x;i++) num=num*10+sz[i];
    num=num*value;
}

int main(){
    int num[6],i;
    for(i=0;i<6;i++){
                     scanf("%d",&num[i]);
                     num[i]=re(num[i]);                                                            
                     }
    for(i=0;i<6;i++){
                     if(i==5) printf("%d",num[i]);
                     else printf("%d\n",num[i]);
                     }
    scanf("%d",&i);
    return 0;
}