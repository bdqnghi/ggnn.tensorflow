int s=0,p;
int a[100];
void factor(int m,int n,int t){
	int i;
	for(i=2;i<=(int)sqrt(n);i++)
		if((n%i==0)&&(i>=m)){
			s++;
			factor(i,n/i,t+1);
		}
	return;
}
int main(){
	int i,j=0,k;
	scanf("%d",&j);
	for(k=0;k<j;k++)
		scanf("%d",&a[k]);
	for(k=0;k<j;k++){
		p=a[k]; s=0;
	for(i=2;i<=(int)sqrt(p);i++)
		if(p%i==0){
		s++;
		factor(i,p/i,2);
		}
		a[k]=s;
	}
	for(k=0;k<j;k++)
		printf("%d\n",a[k]+1);
	return 0;
}