

int main(){
	int n,x,y,i,b;
	double a[100];

	scanf("%d%d%d",&n,&x,&y);
	a[0]=1.0*y/x;
	a[0]=a[0]*100;
	for(i=1;i<n;i++){
	  scanf("%d%d",&x,&y);
      a[i]=1.0*y/x;
	  a[i]=a[i]*100;
	  b=(int)(a[i]-a[0]);
	  if(b>=5)
		  printf("better\n");
	  else if(b<=-5)
		  printf("worse\n");
	       else 
		  printf("same\n");


	
	
	}










	return 0;
}