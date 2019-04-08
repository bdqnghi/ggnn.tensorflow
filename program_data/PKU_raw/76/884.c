struct qj{
	int a,b;
}q[50001];
int main() 
{ int n,i,j,m,z;
  scanf("%d",&n);
  for(i=0;i<n;i++){
	  scanf("%d %d",&q[i].a,&q[i].b);
  }
  for(i=n;i>1;i--){
	  for(j=0;j<i-1;j++){
		  if(q[j].a>q[j+1].a){
			  z=q[j+1].a;
			  q[j+1].a=q[j].a;
			  q[j].a=z;
			  z=q[j+1].b;
			  q[j+1].b=q[j].b;
			  q[j].b=z;
		  }
  }}
  i=0;
  m=q[0].b;
  while(i<n-1){
	  if(m<q[i+1].a){
		  printf("no");
		  return 0;
	  }
	  else{
		  if(q[i+1].b>m){
			  m=q[i+1].b;
		  }
	  }
	  i+=1;
  }
  printf("%d %d",q[0].a,m);
  return 0;
} 