
int main(){
 int n,i,j,t,num;
 int br[100];
 int count[100][61]={0};
 scanf("%d",&n);
 for (i=0;i<n;i++){
  scanf("%d",&br[i]);
  for (j=0;j<br[i];j++){
   scanf("%d",&t);
   count[i][t]=1;
  }
 }
 for (i=0;i<n;i++){
  j=0;num=0;
  while (j<60){
   
   j+=1;
   num+=1;
   if (count[i][num]==1) {
    j+=3;
    if (j>=60) break;
   };
  }
  printf("%d\n",num);
 }
 return 0;
}

