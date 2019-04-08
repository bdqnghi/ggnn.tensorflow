int main (){

  int n,m,e,i;
  int sz[100];
  scanf("%d",&n);

  for(i=0;i<n;i++){
	  scanf("%d",&(sz[i]));
  }

  if(n%2==0){
	  m=n/2;
  }else{
	  m=(n-1)/2;
  }
  for(i=0;i<m;i++){
	  e=sz[i];
	  sz[i]=sz[n-1-i];
	  sz[n-1-i]=e;
  }
  if(n%2!=0){
     sz[m]=sz[m];
  }

  for(i=0;i<n-1;i++){
     printf("%d ",(sz[i]));
  }
  printf("%d",sz[n-1]);


return 0;
} 
