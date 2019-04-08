int main (){
    int n,i,x,y;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=1;i<n+1;i++){
    scanf("%d %d",&a[i],&b[i]);
 }
    x=0,y=0;
    for(i=1;i<n+1;i++){
    if(a[i]-b[i]==1||b[i]-a[i]==2){
    y++;
 }else if(a[i]-b[i]==2||b[i]-a[i]==1){
    x++;
 }else{
    x=x,y=y;
 }
}
    if(x>y){
    printf("A");
 }else if(x<y){
    printf("B");
 }else{
    printf("Tie");
 }
    return 0;
}