int main(){
    int i,n,a,b,c,d;
    double A,B,C,D;
    int sz[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%d",&(sz[i]));   
    }
    a=0;b=0;c=0;d=0;
    for(i=0;i<n;i++){
        if(sz[i]<=18){
            a++;
        }else if(sz[i]<=35&&sz[i]>18){
            b++;
        }else if(sz[i]<=60&&sz[i]>35){
            c++;
        }else if(sz[i]>60){
            d++;
        }
    }
    A=(double)(a*1.0/n*100);
    B=(double)(b*1.0/n*100);
    C=(double)(c*1.0/n*100);
    D=(double)(d*1.0/n*100);
    printf("1-18: %.2lf%%\n",A);
    printf("19-35: %.2lf%%\n",B);
    printf("36-60: %.2lf%%\n",C);
    printf("Over60: %.2lf%%\n",D);
    return 0;
}

