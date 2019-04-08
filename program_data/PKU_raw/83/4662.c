int main(){
	int n,i;
	scanf("%d",&n);
	double a[MAX],b[MAX],sum=0,num=0;
	double c[MAX],GPA;
	for(i=0;i<n;i++){
    scanf("%lf",&a[i]);
	}
    for(i=0;i<n;i++){
     scanf("%lf",&b[i]);
	}
	for(i=0;i<n;i++){
       if(b[i]<60){
		   c[i]=0;}
	   else if(b[i]<=63){
		   c[i]=1.0;}
	   else if(b[i]<=67){
		   c[i]=1.5;}
	   else if(b[i]<=71){
		   c[i]=2.0;}
	   else if(b[i]<=74){
		   c[i]=2.3f;}
	   else if(b[i]<=77){
		   c[i]=2.7f;}
       else if(b[i]<=81){
		   c[i]=3.0;}
       else if(b[i]<=84){
		   c[i]=3.3f;}
       else if(b[i]<=89){
		   c[i]=3.7f;}
       else if(b[i]<=100){
		   c[i]=4.0;}
	   }
	for(i=0;i<n;i++){
		   sum+=a[i]*c[i];
		   num+=a[i];
	}
	GPA=sum/num;
	printf("%.2f",GPA);
    return 0;
}