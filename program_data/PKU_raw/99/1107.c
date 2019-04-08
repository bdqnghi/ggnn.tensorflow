int main(){
    int n,i,x;
    double a,b,c,d,e;
    a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x<=18){
            a=a+1;
        }else if(x>18&&x<36){
            b=b+1;
        }else if(x>35&&x<61){
            c=c+1;
        }else if(x>60){
            d=d+1;
        }
    }
    e=a+b+c+d;
    printf("1-18: %.2lf",a/e*100);printf("%%\n");
    printf("19-35: %.2lf",b/e*100);printf("%%\n");
    printf("36-60: %.2lf",c/e*100);printf("%%\n");
  printf("Over60: %.2lf",d/e*100);printf("%%\n");
   
return 0;
}

