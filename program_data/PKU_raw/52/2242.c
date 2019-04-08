int main(){
  int n,i,m,sz[100];
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++){
	  scanf("%d",&sz[i]);
  }
  for(i=n-m;i<n;i++){
  printf("%d",sz[i]);
  printf(" ");
}
  for(i=0;i<n-m-1;i++){
	  printf("%d",sz[i]);
	  printf(" ");
  }
  printf("%d",sz[n-m-1]);
return 0;
}


