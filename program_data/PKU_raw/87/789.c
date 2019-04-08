int main(){
    int a,b,c,d,e,f,i,s,sum[100];
    for(i=0;i<100;i++){
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if((a+b+c+d+e+f)!=0){
                         if(f<c){
                         f+=60;
                         e-=1;
                         }
                         if(e<b){
                         e+=60;
                         d-=1;
                         }
                         
                         d+=12;
                         
                         sum[i]=f-c+(e-b)*60+(d-a)*3600;
                         }else{
                               break;
                               }
                               }
    for(s=0;s<i;s++){
                     printf("%d\n",sum[s]);
                     }

    return 0;
} 
