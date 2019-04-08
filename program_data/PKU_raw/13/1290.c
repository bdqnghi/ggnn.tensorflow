int main()
{
  int n,i,k,sum=0;
  scanf("%d",&n);
  int x[n];
  for(i=0;i<n;i++){
      scanf("%d",&x[i]);
      for(k=0;k<i;k++){
          if(x[k]==x[i]){
             i--;
             n--;
             break;
             }
          }
  }
  printf("%d",x[0]);
  for(i=1;i<n;i++){
      printf(" %d",x[i]);
  }    
  return 0;
}    
