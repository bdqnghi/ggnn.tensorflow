int main(){
  int n;
  scanf("%d",&n);
  int i,x,y;
  double a,b;
  scanf("%d%d",&x,&y);
    a=1.0*y/x;
  for(i=2;i<=n;i++){
    scanf("%d%d",&x,&y);
	b=1.0*y/x;
	  if((a-b)>0.05){
	    printf("worse\n");
	  }
	  else if((b-a)>0.05){
	    printf("better\n");
	  }
	  else{
	    printf("same\n");
	  }
	}
  return 0;
}