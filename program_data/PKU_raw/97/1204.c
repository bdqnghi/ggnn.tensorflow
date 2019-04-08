int main(){
    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    a=n/100;
    b=n%100/50;
    c=n%100%50/20;
    d=n%100%50%20/10;
    e=n%100%50%20%10/5;
    f=n-a*100-b*50-c*20-d*10-e*5;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d",f);
    return 0;
}
