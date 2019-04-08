int main(){
    int n;
    scanf("%d\n",&n);
    float GPA,s=0.0,m=0.0,j[n];
    int x[n],c[n];
    for(int t=0;t<n;t++){
       scanf("%d",&(x[t]));
    }
    for(int j=0;j<n;j++){
       scanf("%d",&(c[j]));
    }
    for(int i=0;i<n;i++){
       if(c[i]>=90){
         j[i]=4.0;
       }else if(c[i]>=85){
         j[i]=3.7;
       }else if(c[i]>=82){
         j[i]=3.3;
       }else if(c[i]>=78){
         j[i]=3.0;
       }else if(c[i]>=75){
         j[i]=2.7;
       }else if(c[i]>=72){
         j[i]=2.3;
       }else if(c[i]>=68){
         j[i]=2.0;
       }else if(c[i]>=65){
         j[i]=1.5;
       }else if(c[i]>=60){
         j[i]=1.0;
       }else{
         j[i]=0.0;}
       s+=(j[i])*(x[i]);
       m+=x[i];
    }
    GPA=s/m;
    printf("%.2f",GPA);
    return 0;
}
    