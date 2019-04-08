int main(){
    int a,b,c,d,e,f;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) && a!=0){
        int begin,end,s;
        begin=a*3600+b*60+c;
        end=(d+12)*3600+e*60+f;
        s=end-begin;
    printf("%d\n",s);
    }
}
