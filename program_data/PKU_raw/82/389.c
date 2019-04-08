int main(){
	int n;
	int a,b;
	int sum=0;
	int i;
	int c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			sum++;
		}
		else{
			if(sum>c){
				c=sum;
			}
			sum=0;
		}
	}
	if(c>=sum){
	printf("%d",c);
	}
	if(c<sum){
		printf("%d",sum);
	}

	return 0;
}