int main(){
int n,a=0;
double s=0;
float GPA;
scanf("%d",&n);
int x[n],y[n];
for(int i=0;i<n;i++){
    scanf("%d",&x[i]);
    a=a+x[i];
}
for(int i=0;i<n;i++){
    scanf("%d",&y[i]);
}
for(int i=0;i<n;i++){
    if(y[i]>=90&&y[i]<=100){
        s=s+4.0*x[i];
    }else if(y[i]>=85&&y[i]<=89){
        s=s+3.7*x[i];
    }else if(y[i]>=82&&y[i]<=84){
        s=s+3.3*x[i];
    }else if(y[i]>=78&&y[i]<=81){
        s=s+3.0*x[i];
    }else if(y[i]>=75&&y[i]<=77){
        s=s+2.7*x[i];
    }else if(y[i]>=72&&y[i]<=74){
        s=s+2.3*x[i];
    }else if(y[i]>=68&&y[i]<=71){
        s=s+2.0*x[i];
    }else if(y[i]>=64&&y[i]<=67){
        s=s+1.5*x[i];
    }else if(y[i]>=60&&y[i]<=63){
        s=s+1.0*x[i];
    }
}
    GPA=s/a;
    printf("%.2f",GPA);
    return 0;
}




