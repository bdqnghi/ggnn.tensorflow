int main(){
	int n,i;
	scanf("%d",&n);
	int xf[10],u[10];
	double sz[10],xfjd[10],sum,k,GPA;
	sum=0;
	k=0;
	for(i=0;i<n;i++){
	   scanf("%d",&xf[i]);
	}
	for(i=0;i<n;i++){
	   scanf("%d",&u[i]);
	  }
    for(i=0;i<n;i++){
 		if(u[i]>=90){
		  sz[i]=4.0;
	     }else if(u[i]<90&&u[i]>=85){
		  sz[i]=3.7;
         }else if(u[i]<85&&u[i]>=82){
			sz[i]=3.3;
         }else if(u[i]<82&&u[i]>=78){
			  sz[i]=3.0;
		 }else if(u[i]<78&&u[i]>=75){
				sz[i]=2.7;
		 }else if(u[i]<75&&u[i]>=72){
				  sz[i]=2.3;
         }else if(u[i]<72&&u[i]>=68){ 
				sz[i]=2.0;
		 }else if(u[i]<68&&u[i]>=64){
					  sz[i]=1.5;
           }else if(u[i]<64&&u[i]>=60){
						sz[i]=1.0;
			}else{
						  sz[i]=0;
		 }
			xfjd[i]=sz[i]*xf[i];
			sum+=xfjd[i];
			k+=xf[i];                         

	}           
	GPA=sum/k;
	printf("%.2lf",GPA);
	return 0;
}