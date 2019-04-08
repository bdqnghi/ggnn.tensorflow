int main( )
{
  
   int n,k,s=0;
  scanf("%d",&n);
 scanf("%d",&k);

  int sz[1000];
  for(int i=0;i<n;i++){
   scanf("%d",&sz[i]);
  }
   for(int z=0;z<n;z++){
   for(int m=z+1;m<n;m++){
    if(k==sz[z]+sz[m]){
      s++;
    }
 if(k!=(sz[z]+sz[m])){
      s+=0;
    }
  }}
  if(s==0){
   printf("no");
  }
if(s!=0){
   printf("yes");
  }
 return 0;
}
 
