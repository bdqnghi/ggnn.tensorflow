 int main(){
 int N,i=0,k=0,j=0;
 scanf("%d",&N);
 int s[N];
 while(i<N){
  scanf("%d",&s[i]);
  i=i+1;
  }
 i=0;
 while(i<N){
  if(s[i]%2==1){
   k=k+1;
   }
  i=i+1;
  }
 i=0;
 int m[k];
 while(i<N){
  if(s[i]%2==1){
   m[j]=s[i];
   j=j+1;
   }
  i=i+1;
  }
 j=0;
 i=0;
 int zhan;
 while(i<k){
  while(j<k-1){
   if(m[j]<m[j+1]){
       zhan=m[j];
       m[j]=m[j+1];
       m[j+1]=zhan;
    }
   j=j+1;
  }
 j=0; 
 i=i+1;
 }
 j=k-2;
 printf("%d",m[k-1]);
 while(j!=-1){
  printf(",%d",m[j]);
  j=j-1;
 }
 return 0;
 }