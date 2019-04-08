int main()
{
     int n,i,k=0,j;
	 float a[300],b[300],c[300],m=0,t;
scanf("%d",&n);
for(i=0;i<n;i++){
                   scanf("%f",&a[i]);
m=m+a[i];}
m=m/n;
for(i=0;i<n;i++){
	b[i]=fabs(a[i]-m);}
t=b[0];
for(i=1;i<n;i++){
	if(b[i]>t){t=b[i];}}
for(i=0;i<n;i++){
	if(b[i]==t){
		c[k]=a[i];
		k++;}
}
if(k==1){printf("%.0f",c[0]);}
if(k>1){


	for(j=k-1;j>0;j--){
                                     for(i=0;i<j;i++){
                                                      if(a[i]>a[i+1]){
                                                                      t=c[i]; 
                                                                      a[i]=c[i+1];
                                                                      c[i+1]=t;
                                                                      
                                                                      }
                                                                      }
                                                                      }
	for(i=0;i<k-1;i++){printf("%.0f,",c[i]);}
	printf("%.0f",c[k-1]);}


            return 0;
              }