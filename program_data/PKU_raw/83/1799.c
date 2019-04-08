
float jd(int x){
	if(90<=x&&x<=100){return 4.0;}
	if(85<=x&&x<=89){return 3.7;}
	if(82<=x&&x<=84){return 3.3;}
	if(78<=x&&x<=81){return 3.0;}
	if(75<=x&&x<=77){return 2.7;}
	if(72<=x&&x<=74){return 2.3;}
	if(68<=x&&x<=71){return 2.0;}
	if(64<=x&&x<=67){return 1.5;}
	if(60<=x&&x<=63){return 1.0;}
	else{return 0;}
	}
int main(){
	int x;
	int n,zxf=0;
	float zjd=0;
	float a; 
	int cj[10],xf[10];
	scanf("%d",&n);
	int i=0;
	while(i<n){
		scanf("%d",&xf[i]);
		i++;}
	i=0;
	while(i<n){
		scanf("%d",&cj[i]);
		i++;}
	i=0;
	while(i<n){
		zxf+=xf[i];
		i++;}
	i=0;
	while(i<n){
		zjd+=(jd(cj[i])*xf[i]);
		i++;}                        
a=1.0*zjd/zxf;
printf("%.2f",a);
}