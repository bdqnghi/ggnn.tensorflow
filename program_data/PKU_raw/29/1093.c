
int main(){
	int m,n[N],i,a,b,j,e;
	double c,s;
	scanf("%d",&m);

	
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}

    for(i=0;i<m;i++){

          a=1;
       	  b=1;
	      s=0;
		for(j=0;j<n[i];j++){
		  c=(double)(a+b)/b;
		  s+=c;
		  e=b;
          b=a+e;
		  a=e;
		 
		}
		printf("%.3lf\n",s);
		
	}
		
	return 0;
}