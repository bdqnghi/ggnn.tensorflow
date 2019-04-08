int main(){
    int n,s=0;
    float j=0,z;
    scanf("%d\n",&n);
    int xf[n],sf[n];
    for(int i=0;i<n;i++){
        scanf("%d",&xf[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&sf[i]);
    }
    for(int i=0;i<n;i++){
        s=s+xf[i];
    }
    for(int i=0;i<n;i++){
        if(89<sf[i]&&sf[i]<=100){
            j=j+4.0*xf[i];
        }
        else if(84<sf[i]&&sf[i]<90){
            j=j+3.7*xf[i];
        }
        else if(81<sf[i]&&sf[i]<85){
            j=j+3.3*xf[i];
        }
        else if(77<sf[i]&&sf[i]<82){
            j=j+3.0*xf[i];
        }
        else if(74<sf[i]&&sf[i]<78){
            j=j+2.7*xf[i];
        }
        else if(71<sf[i]&&sf[i]<75){
            j=j+2.3*xf[i];
        }
        else if(67<sf[i]&&sf[i]<72){
            j=j+2.0*xf[i];
        }
        else if(63<sf[i]&&sf[i]<68){
            j=j+1.5*xf[i];
        }
        else if(59<sf[i]&&sf[i]<64){
            j=j+1.0*xf[i];
        }
        else if(sf[i]<60){
            j=j;
        }
    }
    z=j/s;
    printf("%.2f",z);
    return 0;
}


