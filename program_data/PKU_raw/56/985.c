int main (){
    int n;
    scanf("%d",&n);
    int a,b,c,d,e;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=n/10000;
    if(b==0){
        printf("%d",a);
    }else if(c==0){
        printf("%d%d",a,b);
    }else if(d==0){
        printf("%d%d%d",a,b,c);
    }else if(e==0){
        printf("%d%d%d%d",a,b,c,d);
    }else{
        printf("%d%d%d%d%d",a,b,c,d,e);
    }
    return 0;
}