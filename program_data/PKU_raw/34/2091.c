int main(){
    int a,b;
    scanf("%d",&a);
    if(a==1){
             printf("End");
             }
    else{
    for(int i=1;;i++){
            if(a%2==0){
                       b=a/2;
                       printf("%d/2=%d\n",a,b);
                       a=b;}
            else{
                 b=a*3+1;
                 printf("%d*3+1=%d\n",a,b);
                 a=b;
                 }
            if(a==1){
                     printf("End");
                     break;}}}
     int y;
    scanf("%d",&y);
    return 0;}