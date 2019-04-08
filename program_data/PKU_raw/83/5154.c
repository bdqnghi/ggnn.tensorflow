int main(){
    int n,a=0;
    scanf("%d\n",&n);
    int xf[n-1],cj[n-1];
    double jd[n-1],GPA,z=0;
    for(int i=0;i<n;i++){
        if(i==n-1){
            scanf("%d\n",&xf[i]);
        }
        else{
            scanf("%d",&xf[i]);
        }
    } 
    for(int i=0;i<n;i++){
        scanf("%d\n",&cj[i]);
    }
    for(int i=0;i<n;i++){
        if(cj[i]<=100&&cj[i]>=90){
            jd[i]=4.0;
        }else{
            if(cj[i]<=89&&cj[i]>=85){
                jd[i]=3.7;
            }else{
                if(cj[i]<=84&&cj[i]>=82){
                    jd[i]=3.3;
                }else{
                    if(cj[i]<=81&&cj[i]>=78){
                        jd[i]=3.0;
                    }else{
                        if(cj[i]<=77&&cj[i]>=75){
                            jd[i]=2.7;
                        }else{
                            if(cj[i]<=74&&cj[i]>=72){
                                jd[i]=2.3;
                            }else{
                                if(cj[i]<=71&&cj[i]>=68){
                                    jd[i]=2.0;
                                }else{
                                    if(cj[i]<=67&&cj[i]>=64){
                                        jd[i]=1.5;
                                    }else{
                                        if(cj[i]<=63&&cj[i]>=60){
                                            jd[i]=1.0;
                                        }else{
                                            jd[i]=0.0;                         
                                         }
                                     }
                                 }
                             }
                         }
                     }
                 }
             }
        }
    }
    for(int i=0;i<n;i++){
        z+=xf[i]*jd[i];
    }
    for(int i=0;i<n;i++){
        a+=xf[i] ;
    }
    GPA=z/a;
    printf("%.2lf",GPA);
    return 0;
}

