int main(){
	int sz[500],i,n,m,max,e,js[500],j;
	scanf("%d",&n);
	for(i=0,j=0;i<=n-1;i++){
		scanf("%d",&sz[i]);
		if(sz[i]%2==1){
			js[j]=sz[i];
			j++;
	}
	}
	max=0;
	for(m=1;m<=j;m++){
	  for(i=0;i<=(j-m);i++){
	      if(js[i]>js[max]){
			  max=i;
		  }
	  }
		  e=js[j-m];
		  js[j-m]=js[max];
		  js[max]=e;
           if(max==j-m){
                    max=j-m-1;
	  }
         }
	for(i=0;i<j-1;i++){
		printf("%d,",js[i]);
	}
	if(i==j-1){
		printf("%d",js[i]);
	}
	return 0;
}
