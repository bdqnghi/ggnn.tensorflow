int main(){
    int n,start[10000],end[10000],e,f,s;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d %d",&start[i],&end[i]);
    }
    int max=end[0];
    for(int i=1;i<n;i++){
        if(end[i]>max){
            max=end[i];}}
    for(int k=1;k<=n;k++){
        for(int i=0;i<n-k;i++){
            if(start[i]>start[i+1]){
                e=start[i+1];        f=end[i+1];
                start[i+1]=start[i]; end[i+1]=end[i];
                start[i]=e;          end[i]=f;
            }}}
    int min=start[0];
    for(int i=1;i<n;i++){
        if(start[i]<=end[i-1]){
            if(end[i]<end[i-1]){end[i]=end[i-1];};
        }else{s=0;break;}
        if(i==n-1){s=1;}
        }
    if(s==0){printf("no");}
    if(s==1){printf("%d %d",min,max);}
}


