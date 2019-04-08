int main(){
	int i,n,p=0,l=0,L,K,k=0,j;
	double m[1000],f[1000],h[1000],t;
	char sex[1000][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",sex[i],&h[i]);
	}
	for(i=0;i<n;i++){
		if(strcmp(sex[i],"male")==0){
		m[l]=h[i];
		l++;
		}else{
		f[k]=h[i];
		k++;
		}
	} 
	L=l,K=k;
 	 for(j=0;j<L;j++){
   	   for(i=0;i<L-1-j;i++){ 
   	   	 if(m[i]>m[i+1]){ 
   	   	 	t=m[i];
   	   	 	m[i]=m[i+1];
   	   	 	m[i+1]=t ;
          }
       }
	 }
	 printf("%.2lf",m[0]);
	 for(i=1;i<L;i++){
		printf(" %.2lf",m[i]);
	 }
	for(j=0;j<K;j++){
   	   for(i=0;i<K-1-j;i++){ 
   	   	 if(f[i]<f[i+1]){ 
   	   	 	t=f[i];
   	   	 	f[i]=f[i+1];
   	   	 	f[i+1]=t ;
          }
       }
	 }
	 for(i=0;i<K;i++){
		printf(" %.2lf",f[i]);
	 }
		return 0;
}
