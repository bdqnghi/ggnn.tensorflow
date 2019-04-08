int main(){
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&a);
    b=a%100;
    c=b%50;
    d=c%20;
    e=d%10;
    f=e%5;
    g=(a-b)/100;
    h=(b-c)/50;
    i=(c-d)/20;
    j=(d-e)/10;
    k=(e-f)/5;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",g,h,i,j,k,f);
    return 0;
}