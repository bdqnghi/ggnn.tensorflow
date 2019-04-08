int main(){
    int n,i;
    int m=0;
    double s=0;
    double x;
    scanf("%d",&n);
    int sz[n],sx[n];
    double sy[n];
    for(i=0;i<n;i++){
        scanf("%d",&(sz[i]));}
    for(i=0;i<n;i++){    
        scanf("%d",&(sx[i]));
    }
    if(n<10){for(i=0;i<n;i++){ 
        m=m+sz[i];
        if(90<=sx[i]&&sx[i]<= 100){
           sy[i]=4.0;
        }else if(85<=sx[i]&&sx[i]<= 89){
            sy[i]=3.7;
        }else if(82<=sx[i]&&sx[i]<=84){
           sy[i]=3.3;
        }else if(78<=sx[i]&&sx[i]<= 81){
            sy[i]=3.0;
        }else if(75<=sx[i]&&sx[i]<=77){
            sy[i]=2.7;
        }else if(72<=sx[i]&&sx[i]<=74){
            sy[i]=2.3;
        }else if(68<=sx[i]&&sx[i]<=71){
            sy[i]=2.0;
        }else if(64<=sx[i]&&sx[i]<=67){
            sy[i]=1.5;
        }else if(60<=sx[i]&&sx[i]<=63){
            sy[i]=1.0;
        }else{
            sy[i]=0;
        }
        s=s+sy[i]*sz[i];
    }
    }
    x=s/m;
  
    printf("%.2lf",x);
    return 0;
}

