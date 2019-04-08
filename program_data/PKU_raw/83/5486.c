int main (){
    int i,n,x;
    int sz[10];
    int xf[10];
    double js[10];
    double j,z;
    x=0;
    j=0.0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&(xf[i]));
        x+=xf[i];
    }
    for(i=0;i<n;i++){
        scanf("%d",&(sz[i]));
        if(sz[i]<60){
            js[i]=0.0;
        }
        else if(sz[i]<64&&sz[i]>59){
            js[i]=1.0;
        }
        else if(sz[i]<68&&sz[i]>63){
            js[i]=1.5;
        }
        else if(sz[i]<72&&sz[i]>67){
            js[i]=2.0;
        }
        else if(sz[i]<75&&sz[i]>71){
            js[i]=2.3;
        }
        else if(sz[i]<78&&sz[i]>74){
            js[i]=2.7;
        }
        else if(sz[i]<82&&sz[i]>77){
            js[i]=3.0;
        }    
        else if(sz[i]<85&&sz[i]>81){
            js[i]=3.3;
        }
        else if(sz[i]<90&&sz[i]>84){
            js[i]=3.7;
        }
        else {
            js[i]=4.0;
        }  
        j+=1.0*(js[i]*xf[i]);
    }
    z=1.0*j/x;
    printf("%.2lf\n",z);
    return 0;
}
