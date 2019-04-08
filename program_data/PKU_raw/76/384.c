int main(){
  int n,a,b;
  scanf("%d",&n);
  struct qu{
     int x,y;
  }
  qus[50000];
  int x,y;
  for(int i=0;i<n;i++){
    scanf("%d%d",&x,&y);
	qus[i].x=x;
	qus[i].y=y;
  }
  for(int k=n-1;k>0;k--){
	  for(int j=0;j<k;j++){
		  if(qus[j].x>qus[j+1].x){
			 int tmpx,tmpy;
			 tmpx=qus[j+1].x;
			 tmpy=qus[j+1].y;
			 qus[j+1].x=qus[j].x;
             qus[j+1].y=qus[j].y;
			 qus[j].x=tmpx;
			 qus[j].y=tmpy;
		  }
	  }
  }
  a=qus[0].x,b=qus[0].y;
  for(int r=1;r<n;r++){
	  if(qus[r].x>b){
	     printf("no");
		 return 0;
	  }else{
		  if(qus[r].y>b)
	     b=qus[r].y;
	  }
  }
  printf("%d %d",a,b);
  return 0;
}