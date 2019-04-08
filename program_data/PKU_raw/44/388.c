
int reverse(int n){
    int x,i,zz;
    zz=n%10;
    for(i=0;n/10!=0;i++){
    n=n/10;
    x=n%10;
    zz=zz*10+x;}
    return zz;
}   
int main(){
    int i,m;
    for(i=0;i<6;i++){
                     scanf("%d",&m);
                     printf("%d\n",reverse(m));
    }                 
    
    return 0;
}
