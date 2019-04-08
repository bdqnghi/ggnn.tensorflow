int main(){
int n,i,k,max=0,min=10000,sum=0;
int a[10000],b[10000],c[10000];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
	if(a[i]<min){
		min=a[i];
	}
	if(b[i]>max){
		max=b[i];
	}
}
for(i=2*min-1;i<2*max;i++){
c[i]=1;
}
for(i=0;i<n;i++){
	for(k=2*a[i]-1;k<2*b[i];k++){
		c[k]=0;
	}
}
for(i=2*min-1;i<2*max;i++){
	if(c[i]==1){
		sum=sum+1;
		}
	}
	if(sum==0)
	{
		printf("%d %d",min,max);
	}else if(sum!=0)
	{
		printf("no");
	}
	return 0;
}