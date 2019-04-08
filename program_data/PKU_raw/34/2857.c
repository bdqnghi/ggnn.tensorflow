int main(){
int n,m,i;
scanf("%d",&n);
if(n==1){
printf("End");
}else{
for(i=1;n!=1;i++){
	m=n;
	if(n%2!=0){
	n=n*3+1;
	printf("%d*3+1=%d\n",m,n);
	}else if(n%2==0){
	n=n/2;
	printf("%d/2=%d\n",m,n);
	}
	if(n==1){
	printf("End");
	}
}
}
return 0;
}