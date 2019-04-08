
int main(int argc, char* argv[])
{
	int n,i,j,k,l;
	int a[13];//mei gei yue de tian shu//
	int b[201];//nian fen//
	int c[201],d[201],sum[201];//diyigeyuefen   di er ge//
	
	scanf("%d",&n);
    for(l=1;l<=n;l++){
		sum[l]=0;}
	for(i=1;i<=n;i++){
		scanf("%d %d %d",&b[i],&c[i],&d[i]);
		if(((b[i]%4==0)&&(b[i]%100!=0))||(b[i]%400==0)){
			 a[1]=31,a[2]=29,a[3]=31,a[4]=30,a[5]=31,a[6]=30,a[7]=31,a[8]=31,a[9]=30,a[10]=31,a[11]=30,a[12]=31;}
		else{
             a[1]=31,a[2]=28,a[3]=31,a[4]=30,a[5]=31,a[6]=30,a[7]=31,a[8]=31,a[9]=30,a[10]=31,a[11]=30,a[12]=31;}
		if(c[i]>d[i]){
			for(j=d[i];j<c[i];j++){
				sum[i]=sum[i]+a[j];}}
		else{
			for(j=c[i];j<d[i];j++){
				sum[i]=sum[i]+a[j];}}
	
	}
	for(k=1;k<=n;k++){
		if(sum[k]%7==0){
			printf("YES\n");}
			
		else{
			printf("NO\n");}
	}
		
			
		
	return 0;
}

