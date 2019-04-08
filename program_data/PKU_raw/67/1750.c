int main(){
  int n;
  double x,y,t;
  int zong[200],you[200],j[200];
  int i=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
	  scanf("%d %d",&zong[i],&you[i]);
      x=you[0]*1.0/zong[0];
	  y=you[i]*1.0/zong[i];
	  t=y-x;
	  if (t>0.05){
		  j[i]=2;
	  }
	  if (t<-0.05){
		 j[i]=0;
	 }
	 if (t<=0.05&&t>=-0.05){
		 j[i]=1;
	  }

  }
  i=1;
  for(i=1;i<n;i++){
	  if(j[i]==2){
		  printf("better\n");
	  }
      if(j[i]==0){
		  printf("worse\n");
	  }
      if(j[i]==1){
		  printf("same\n");
	  }
  }


  return 0;
}
   