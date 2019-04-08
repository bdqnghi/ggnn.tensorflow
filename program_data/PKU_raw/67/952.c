int main(){
	int n,a,b,j,k;
	int i;
	double c,d,e;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	c=b*1.0/a;
	for(i=0;i<n-1;i++){
	  scanf("%d%d",&j,&k);
	  d=k*1.0/j;
	  e=d-c;
	  if(e>0.05){
	    printf("better\n");
	  }else if(e<-0.05){
	     printf("worse\n");
	  }else if(e>=-0.05&&e<=0.05){
	     printf("same\n");
	  } 
	}  
  return 0;
}