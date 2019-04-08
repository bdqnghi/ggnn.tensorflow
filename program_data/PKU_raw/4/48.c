int main()
{
	int m,n,*p,*p0,i;
	scanf("%d%d",&m,&n);
	p = (int *)calloc(m*n,sizeof(int)); 
	
	p0 = p;
	for (p=p0;p<p0+m*n;p++){
		scanf("%d",p);
	}
	
    if (m<n){
		for (p=p0;p<p0+m;p++){
			for (i=0;i<p-p0+1;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}
		for (p=p0+m;p<p0+n-1;p++){
			for (i=0;i<m;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}		
		for (p=p0+n-1;p<p0+m*n;p+=n){
			for (i=0;i<m-(p-p0)/n;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}
	}
 
	if (m==n){
		for (p=p0;p<p0+n-1;p++){
			for (i=0;i<p-p0+1;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}
		for (p=p0+n-1;p<p0+m*n;p+=n){
			for (i=0;i<m+1-(p-p0+1)/n;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}
	}
	
	if (m>n){
		for (p=p0;p<p0+n-1;p++){
			for (i=0;i<p-p0+1;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}
     	for (p=p0+n-1;p<=p0+(m-n+1)*n-1;p+=n){
			for (i=0;i<n;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}
		for (p=p0+(m-n+2)*n-1;p<=p0+m*n-1;p+=n){
			for (i=0;i<m-(p-p0+1)/n+1;i++){
				printf("%d\n",*(p+i*(n-1)));
			}
		}		
	}			 
}
