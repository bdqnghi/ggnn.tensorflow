int x[10000]={0};
int b=1;
void f(int a,int n){
	int i;
	if(n==1); 
	else {
	for(i=0;i<a;i++)x[i]=x[i]*2;
	for(i=0;i<a;i++){
		if(i<a-1){
		if(x[i]>=10){
			x[i]-=10;
			x[i+1]+=1;}
		}
		else {
			if(x[i]<10)f(a,n-1);
			else {x[i+1]=1;
			x[i]-=10;
			b++;
			f(a+1,n-1);
			}
		}
	}}
	
}
int main()
{
	int i,j,n,a,q,m,g,k,h;
	scanf("%d",&n);
	if(n==0)printf("1");
	else{
	x[0]=2;
	f(1,n);
	for(i=b-1;i>=0;i--){
		printf("%d",x[i]);}
	}	

}
