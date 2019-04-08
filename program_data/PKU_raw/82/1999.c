int main(){
    int n,ss[100],sz[100],time[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ss[i]);
        scanf("%d",&sz[i]);}
    int h=0,j=0;
    for(int k=0;k<n;k++){
        if((ss[k]>=90)&&(ss[k]<=140)&&(sz[k]>=60)&&(sz[k]<=90)){
            h++;}
        else{
            time[j]=h;
            j++;
            h=0;}}
    int e=0;
    for(int l=0;l<j;l++){
        if(e<time[l]){
            e=time[l];}}
    if(e>=h){
           printf("%d",e);}
    else{
           printf("%d",h);}
    return 0;
}
        