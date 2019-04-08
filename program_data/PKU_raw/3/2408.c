int main(){
  int n,k,i,j;
  int a[max];
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  i=0;
  while(i<n){
      j=1;
	  while(j<n){
		  if(a[i]==k-a[j]){
		  printf("yes");
		  break;
		  }
		  j++;
	  }
	  if(a[i]==k-a[j]){
	  break;
	  }
	  i++;
  }
  if(i==n){
  printf("no");
  }
  return 0;
}