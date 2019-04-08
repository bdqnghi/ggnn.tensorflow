int main(){
	int i=0,j=0;
	int	a[500],b[500];
	int m;
	double sum=0;
	int n[500];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&(n[i]));
	}
	i=0;
	for(i=0;i<m;i++){
          a[0]=2;b[0]=1;
		  a[1]=3;b[1]=2;
		  sum=0;
	  for(j=0;j<n[i];j++){
		  
			  if(j>1){
				  a[j]=a[j-1]+a[j-2];
				  b[j]=b[j-1]+b[j-2];

			  }
			  sum+=a[j]*1.0/b[j];
	  }
	  printf("%.3lf\n",sum);
	}


	return 0;

}
