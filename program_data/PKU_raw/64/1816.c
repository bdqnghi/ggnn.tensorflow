int main()
{

	int n,i,j,a[15],b[15],c[15];
	double d[15][15],z[150],q[150];
	scanf("%d",&n);
                                     
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);}
 
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			d[i][j]=sqrt((a[i]-a[j])*(a[i]-a[j])+
				         (b[i]-b[j])*(b[i]-b[j])+
						 (c[i]-c[j])*(c[i]-c[j]));}}


    
    int t=0;
    for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			z[t]=d[i][j]; t++;}}

	int k;
	double x;

	for(k=t-1;k>0;k--){
		for(i=0;i<k;i++){
			if(z[i]<z[i+1]) {x=z[i]; z[i]=z[i+1]; z[i+1]=x;}}}
	

    int p=0;
	for(i=0;i<150;i++){
		if(z[i]!=z[i+1])  {q[p]=z[i]; p++;}} 


    
	
	
	int y;
	
	for(y=0;q[y]!=0;y++){
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(d[i][j]==q[y]){ 
				printf("(%d,%d,%d)-(%d,%d,%d)",a[i],b[i],c[i],a[j],b[j],c[j]);
			    printf("=");
				printf("%.2lf\n",d[i][j]);}}}}



		

          








   
 













	return 0;
}


