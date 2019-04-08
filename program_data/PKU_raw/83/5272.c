int main(){
    int n,i;
    scanf("%d",&n);
    double a,b,c,x[n],y[n];
    for(i=0;i<n;i++){
        scanf("%lf",&y[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lf",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]>=90){
            x[i]=4.0;
        }
        else if(x[i]>=85&&x[i]<=89){
            x[i]=3.7;
        }
        else if(x[i]>=82&&x[i]<=84){
            x[i]=3.3;
        }
        else if(x[i]>=78&&x[i]<=81){
            x[i]=3.0;
        }
        else if(x[i]>=75&&x[i]<=77){
            x[i]=2.7;
        }
        else if(x[i]>=72&&x[i]<=74){
            x[i]=2.3;
        }
        else if(x[i]>=68&&x[i]<=71){
            x[i]=2.0;
        }
        else if(x[i]>=64&&x[i]<=67){
            x[i]=1.5;
        }
        else if(x[i]>=60&&x[i]<=63){
            x[i]=1.0;
        }
        else if(x[i]<60){
            x[i]=0;
        }
    }
    a=0;
    for(i=0;i<n;i++){
        a=a+x[i]*y[i];
    }
    c=0;
    for(i=0;i<n;i++){
        c=c+y[i];
    }
    b=a/c;
    printf("%.2lf",b);
    return 0;
}
