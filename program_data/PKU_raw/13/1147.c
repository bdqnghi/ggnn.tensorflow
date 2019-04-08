int stat[115],i,n,k,first=0;
int main(){
  for (i=0;i<110;i++) stat[i]=0;
  for (scanf("%d",&n),i=0;i<n;i++){
     scanf("%d",&k),stat[k]++;
     printf(stat[k]==1?"%s%d":"",i!=0?" ":"",k);
    
  }
  printf("\n");
  return 0;
}