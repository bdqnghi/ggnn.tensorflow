int main(){
 int i,n,a,b,j=0,l=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d%d",&a,&b);
  if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
    j=j+1;
  }else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
    l=l+1;
  }
 }
 if(j>l){
  printf("A");
 }else if(j<l){
  printf("B");
 }else{
  printf("Tie");
 }
 return 0;
} 