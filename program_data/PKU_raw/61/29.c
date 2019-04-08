int value(int a){
	int p=1,q=1,i,result;
	if(a>=3){
		for(i=3;i<=a;i++){
			result=p+q;
			p=q;
			q=result;
		}
	}else{
		result=1;
	}
	return result;
}
int main(){
	int a,i,n,result;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		result=value(a);
		printf("%d\n",result);
	}
	return 0;
}