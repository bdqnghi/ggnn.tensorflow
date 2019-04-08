int main(){
	int n,a,b;
	int as=0,bs=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			as++;
		else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
			bs++;
	}
	if(as>bs)
		printf("A");
	else if(as<bs)
		printf("B");
	else
		printf("Tie");
	return 0;
}