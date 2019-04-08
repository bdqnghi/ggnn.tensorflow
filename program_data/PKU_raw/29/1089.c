int main(){
    int i,m,n,k,j,g[100];
	double z[100],sum,s[102];
	s[0]=1;
	s[1]=2;
	k=0;
	for(i=0;i<21;i++){
	  s[i+2]=s[i]+s[i+1];
	  z[k]=s[i+1]/s[i];
	  k++;
	  }
	  scanf("%d",&m);
	  for(n=0;n<m;n++){
	  scanf("%d",&g[n]); 
	  }
	  for(n=0;n<m;n++){
		  sum=0;
	     k=0;
		 for(j=0;j<g[n];j++){
	     sum+=z[k];
		 k++;
		 }
      printf("%.3lf\n",sum);
	  }
	return 0;
	}