int h[25],n;
int hack(int i,int w){
 if(i==n-1){
  if(h[i]<=w) return 1;
  else return 0;
 }
 int b=hack(i+1,w),c=0;
 if(h[i]<=w)
   c=1+hack(i+1,h[i]);
 if(b>c) return b;
 else return c;   
}
int main(){
 scanf("%d",&n);
 int i,max=0;
 for(i=0;i<n;i++){
  scanf("%d",&h[i]);
  if(h[i]>max)
   max=h[i];
 }
 printf("%d",hack(0,max));
 return 0;
}