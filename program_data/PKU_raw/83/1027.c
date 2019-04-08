int main()
{
	int n,x[9]={0},c[9]={0},sumx=0;
	float zjd=0;
	float xj[9]={0},sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
		sumx+=x[i];
	};
	for(int k=0;k<n;k++){
		scanf("%d",&c[k]);
	};
	for(int j=0;j<n;j++){
		if(90<=c[j]&&c[j]<=100){
			xj[j]=4.0;
		};
		if(85<=c[j]&&c[j]<=89){
			xj[j]=3.7;
		};
		if(82<=c[j]&&c[j]<=84){
			xj[j]=3.3;
		};
		if(78<=c[j]&&c[j]<=81){
			xj[j]=3.0;
		};
		if(75<=c[j]&&c[j]<=77){
			xj[j]=2.7;
		};
		if(72<=c[j]&&c[j]<=74){
			xj[j]=2.3;
		};
		if(68<=c[j]&&c[j]<=71){
			xj[j]=2.0;
		};
		if(64<=c[j]&&c[j]<=67){
			xj[j]=1.5;
		};
		if(60<=c[j]&&c[j]<=63){
			xj[j]=1.0;
		};
		if(0<=c[j]&&c[j]<=59){
			xj[j]=0;
		};
	};
	for(int m=0;m<n;m++){
		sum+=xj[m]*x[m];
	};
	zjd=sum/sumx;
	printf("%.2lf\n",zjd);
	return 0;
}
