int main(){
	int sum=0,t=0;
	int n;
	scanf("%d",&n);
	for(n;n>0;n--){
	int a,b;
    scanf("%d %d",&a,&b);
	if(a>=90 && a<=140 && b>=60 && b<=90){
		sum=sum+1;
		if(t<=sum){
			t=sum;
		}
	}
	else{sum=0;
	}
	}
printf("%d",t);
return 0;
}