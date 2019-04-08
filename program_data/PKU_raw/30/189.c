
void main(){
	int n;
	int sum,i,a,b;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++){
		a=i/10;
		b=i%10;
		if(i%7==0 || a==7 || b==7)
			continue;
		sum=sum+i*i;
	}
	printf("%d\n",sum);
}

