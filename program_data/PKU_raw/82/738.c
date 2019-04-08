int main(){
   int i, a=0, s=0,n, sz[100], ss[100];
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&ss[i]);
      scanf("%d",&sz[i]);
      if(ss[i]>=90&&ss[i]<=140&&sz[i]<=90&&sz[i]>=60){
      a=a+1;
      }
      else {
		  a=0;}
      if(a>=s){
		  s=a;}
    }
     printf("%d",s);
     return 0;
 }
