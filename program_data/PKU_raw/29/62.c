int main(){
	int m,i,j,k,h,n;
    double sum[1000];
	int a[1000],c[1000];
	double b[1000];

    c[0]=1;
	c[1]=2;
    for(n=2;n<1000;n++){
		c[n]=c[n-1]+c[n-2];
	}
	scanf("%d",&m);
	for(j=0;j<m;j++){
		sum[j]=0;
	}

   for(i=0;i<m;i++){
       scanf("%d",&a[i]);

       for(k=0;k<a[i];k++){
	     b[k]=1.0*c[k+1]/c[k];
	     sum[i]=sum[i]+b[k];
	   }
	}
    
    for(h=0;h<m;h++){
	printf("%.3lf\n",sum[h]);
	}

    
	return 0;

}