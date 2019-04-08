int main(){
  int n[1000],m,k,i,a=2,b=1,c;
  double sum[1000],y=0;
  scanf("%d",&m);
  for(i=0;i<m;i++){
      scanf("%d",&n[i]);
  }
  for(i=0;i<m;i++){
      y=0;
    a=2,b=1;
		for(k=0;k<n[i];k++){
		 y+=1.0*a/b;
		 c=a;
		 a=a+b;
		 b=c;
		}
	 sum[i]=y;
	}
  for(i=0;i<m;i++){
      printf("%.3lf\n",sum[i]);
  }
  return 0;
}

