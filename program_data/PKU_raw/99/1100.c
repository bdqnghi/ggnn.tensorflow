int main(){
    int n,a,i;
    double b=0,c=0,d=0,e=0;
    double h,p,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a<=18){
            b+=1;
        }else if(19<=a&&a<=35){
            c+=1;
        }else if(36<=a&&a<=60){
            d+=1;
        }else {
            e+=1;
        }
    } 
    h=100.0*b/n;
    p=100.0*c/n;
    j=100.0*d/n;
    k=100.0*e/n;
    printf("1-18: %.2lf%%\n",h);
    printf("19-35: %.2lf%%\n",p);
    printf("36-60: %.2lf%%\n",j);
    printf("Over60: %.2lf%%\n",k);
    return 0;
}


