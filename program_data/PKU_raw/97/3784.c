int main(){
    int SUM,a,i,j=0;
    int ht[100000];
    scanf("%d",&SUM);
    a=SUM;
    for(i=100;i>0;i--){
        if(i==100||i==50||i==20||i==10||i==5||i==1){
           ht[j]=a/i;
           a=a%i;
           j++;
        }
    }
    for(i=0;i<j;i++){
        printf("%d\n",ht[i]);
    }
    return 0;
}
