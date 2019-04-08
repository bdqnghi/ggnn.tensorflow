int main(){
    int a,b,c,d,e,f,i,r=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    //printf("%d%d%d%d%d%d",a,b,c,d,e,f);
    while(a!=0){
        r=0;
        for(i=a+1;i<d+12;i++){
            r=r+3600;
        } //printf("%d",r);
        for(i=b+1;i<60;i++){
            r=r+60;
        }
        for(i=c;i<60;i++){
            r++;
        }
        r=r+e*60+f;
        printf("%d\n",r);
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    }
    return 0;
}
