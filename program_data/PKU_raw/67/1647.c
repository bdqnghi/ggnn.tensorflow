int main(){
int n,s,i;
scanf("%d",&n);
int a[n],b[n];
double c[n];
for(i=0;i<n;i++){
	scanf("%d%d",&a[i],&b[i]);
	c[i]=1.0*b[i]/a[i];
}
for(i=1;i<n;i++){
	if(c[i]-c[0]>0.05){
		printf("better");
		printf("\n");
	}else if(c[0]-c[i]>0.05){
printf("worse");
		printf("\n");
	}else{
printf("same");
		printf("\n");
	}
}
return 0;
}