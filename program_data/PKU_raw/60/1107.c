int main(){
int n,i,a,b,m=0;
scanf("%d",&n);
for(a=3;a<=n-2;a++){
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0){
		break;
		}
	}
	if(i>sqrt(a)){
	b=a+2;
	}else{
	continue;
	}
	for(i=2;i<=sqrt(b);i++){
		if(b%i==0){
		break;
		}
	}
	if(i>sqrt(b)){
	printf("%d %d\n",a,b);
	m=1;
	}
}
if(m==0){
printf("empty");
}
return 0;
}