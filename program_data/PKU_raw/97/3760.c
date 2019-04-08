int main(){
    int sz[6],m[6],n,i=0,e,t;
    scanf("%d",&n);
    e=n;
    m[0]=100;
    m[1]=50;
    m[2]=20;
    m[3]=10;
    m[4]=5;
    m[5]=1;
    for(i=0;i<6;i++){
        sz[i]=e/m[i];
        e=e-m[i]*sz[i];
        }
    for(i=0;i<6;i++){
        printf("%d\n",sz[i]);
    }
    return 0;
}
