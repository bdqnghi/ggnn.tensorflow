int main(){
  int n,a,b,x=0,y=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
    x=x+1;}else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
    y=y+1;}else if(a==b){x=x,y=y;}
  }
  if(x==y){
  printf("Tie");}else if(x>y){
  printf("A");}else if(x<y){
  printf("B");}
  return 0;
}