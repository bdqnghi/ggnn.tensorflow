int main(){
  int shu[10][3],i,j,n,a;
  double d[1000],e;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&shu[i][0],&shu[i][1],&shu[i][2]);
  } 
  for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
         d[10*i+j]=0;
	  }
  }
  for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
		  a=(shu[i][0]-shu[j][0])*(shu[i][0]-shu[j][0])+(shu[i][1]-shu[j][1])*(shu[i][1]-shu[j][1])+(shu[i][2]-shu[j][2])*(shu[i][2]-shu[j][2]);
        d[10*i+j]=sqrt(a);
	  }
  }
  while(1){
  e=0;
  for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
		  if(d[10*i+j]>e){
		  e=d[10*i+j];
		  }
	  }
  }
  if(e==0){
  break;
  }
   for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
		  if(d[10*i+j]==e){
	  
  
	  printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",shu[i][0],shu[i][1],shu[i][2],shu[j][0],shu[j][1],shu[j][2],e);
	  d[10*i+j]=0;
  }}}
  }
	  return 0;
}