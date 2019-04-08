int main(){
	int m,n,i,j,k;
	double a[1000],b[1000],sz[1000];
	double s;
	a[0]=2;
	a[1]=3;
	b[0]=1;
	b[1]=2;
    scanf("%d",&m);
	for(j=0;j<=m-1;j++){	
		s=0;
       scanf("%d",&n);
	   if(n>=3){
	    for(i=0;i<=n-3;i++){
	     a[i+2]=a[i]+a[i+1];
		  b[i+2]=b[i]+b[i+1];
	    s=s+(a[i+2])/(b[i+2]);
	     sz[j]=s+3.5;
	}
	   }else{
			if(n==1)
	sz[j]=2.000;
		else
		sz[j]=3.500;
	   }
	   }
	
	for(k=0;k<m;k++){
		printf("%.3lf\n",sz[k]);
	}

	return 0;
}

