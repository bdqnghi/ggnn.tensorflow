int main (){
    int i,a,sz[6],rmb[6];
    scanf("%d",&a);
    rmb[0]=100;rmb[1]=50;rmb[2]=20;rmb[3]=10;rmb[4]=5;rmb[50]=1;
    for(i=0;i<5;i++){
        sz[i]=a/rmb[i];
        a=a-sz[i]*rmb[i];
    }
     for(i=0;i<5;i++){printf("%d\n",sz[i]);}printf("%d\n",a);
}