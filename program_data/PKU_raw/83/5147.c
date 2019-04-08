int main(){
    int xf[m],fs[m];
    double xfj[m],jd[m];
    int n,i;
    double gpa,zf,zj;
    scanf("%d",&n);
    for( i=0;i<n;i++){
        scanf("%d",&xf[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&fs[i]);
    }
    for(i=0;i<n;i++){
        if(fs[i]<=100&&fs[i]>=90){
            jd[i]=4.0;
        }else if(fs[i]>=85){
            jd[i]=3.7;
        }else if(fs[i]>=82){
            jd[i]=3.3;
        }else if(fs[i]>=78){
            jd[i]=3.0;
        }else if(fs[i]>=75){
            jd[i]=2.7;
        }else if(fs[i]>=72){
            jd[i]=2.3;
        }else if(fs[i]>=68){
            jd[i]=2.0;
        }else if(fs[i]>=64){
            jd[i]=1.5;
        }else if(fs[i]>=60){
            jd[i]=1.0;
        }else{
            jd[i]=0;
        }
    }
    for(i=0;i<n;i++){
        xfj[i]=jd[i]*xf[i];
    }zf=0;
    for(i=0;i<n;i++){
        zf+=xf[i];
    }zj=0;
    for(i=0;i<n;i++){
        zj+=xfj[i];
    }gpa=zj/zf;
    printf("%.2lf",gpa);
    
    return 0;
}