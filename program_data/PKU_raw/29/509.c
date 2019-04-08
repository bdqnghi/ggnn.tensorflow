int main(){
  int m,i,j,t,o,p,e;
  double k[50]={0};
  scanf("%d",&m);
  for(i=0;i<m;i++){
     scanf("%d",&t);
	 o=2;
	 p=1;

	 for(j=0;j<t;j++){
		 k[i]+=1.0*o/p;
		 e=p;
		 p=o;
		 o+=e;
	 }

  }
  for(i=0;i<m;i++){
	  if(i==m-1){
	  printf("%.3lf",k[i]);
	  }
	  else{
		  printf("%.3lf\n",k[i]);}
  }
  

return 0;
}