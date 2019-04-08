int main(){
    int n,i,x=0;
    int a[10],b[10];
    float c[10],y=0.0,GPA;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d ",&a[i]);
       x+=a[i];
    }
    for(i=0;i<n;i++){
       if(i<n-1){
          scanf("%d ", &b[i]);
       }else 
          scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++){
       if(b[i]<=60){
          c[i]=0;
       }else if(b[i]<=63){
          c[i]=1.0;
       }else if(b[i]<=67){
          c[i]=1.5;
       }else if(b[i]<=71){
          c[i]=2.0;
       }else if(b[i]<=74){
          c[i]=2.3;
       }else if(b[i]<=77){
          c[i]=2.7;
       }else if(b[i]<=81){
          c[i]=3.0;
       }else if(b[i]<=84){
          c[i]=3.3;
       }else if(b[i]<=89){
          c[i]=3.7;
       }else 
          c[i]=4.0;
       y+=(c[i])*(a[i]);
    }
    GPA=y/x;
    printf("%.2f",GPA);
    return 0;
}
           
