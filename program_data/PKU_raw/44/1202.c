int reverse(int num)
{ int a,b,c,d,e,f;
    if(num==0){
      printf("0");}
      else if(num<0){
        num=0-num;
        printf("-");}
    a=(int)(num/10000);
    b=(int)((num%10000)/1000);
    c=(int)((num%1000)/100);
    d=(int)((num%100)/10);
    e=(int)(num%10);
    f=10000*e+1000*d+100*c+10*b+a;
    while(f%10==0){
      f=f/10;}
    return f;
}
int main(){
    int i,n,rn;
    for(i=0;i<6;i++){
      scanf("%d",&n);
      rn=reverse(n);
      printf("%d\n",rn);
      }
    return 0;
}