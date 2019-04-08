int main(){
    int n,i,XF;
    double GPA;
    scanf("%d",&n);
    int xf[n],cj[n];
    double gp[n],gpa;
    for(i=0;i<n;i++){
        scanf("%d",&xf[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&cj[i]);
    }
    for(i=0;i<n;i++){
        if(cj[i]>89){gp[i]=4.0;
        }else if(cj[i]>84&&cj[i]<90){
            gp[i]=3.7;
        }else if(cj[i]>81&&cj[i]<85){
            gp[i]=3.3;
        }else if(cj[i]>77&&cj[i]<82){
            gp[i]=3.0;
        }else if(cj[i]>74&&cj[i]<78){
            gp[i]=2.7;
        }else if(cj[i]>71&&cj[i]<75){
            gp[i]=2.3;
        }else if(cj[i]>67&&cj[i]<72){
            gp[i]=2.0;
        }else if(cj[i]>63&&cj[i]<68){
            gp[i]=1.5;
        }else if(cj[i]>59&&cj[i]<64){
            gp[i]=1;
        }else{
            gp[i]=0;
        }
    }
    gpa=0,XF=0;
    for(i=0;i<n;i++){
        gpa=gpa+xf[i]*gp[i];
    }
    for(i=0;i<n;i++){
        XF=XF+xf[i];
    }
    GPA=gpa/XF;
    printf("%.2lf",GPA);
    return 0;
}

