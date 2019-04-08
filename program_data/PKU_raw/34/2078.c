int main(){
	int a;
	int b,i;
	scanf("%d",&a);
	b=a;
	for(i=0;b!=1;i++){
		if(a%2==0){
			b=a/2;
			if(i==0){
				printf("%d/2=%d",a,b);
			}
			else if (i!=0){
				printf("\n%d/2=%d",a,b);
			}
		}
		else if(a%2!=0) {
			b=a*3+1;
			if(i==0){
				printf("%d*3+1=%d",a,b);
			}
			else if(i!=0){
				printf("\n%d*3+1=%d",a,b);
			}
		}
		a=b;
	}
	printf("\nEnd");
	return 0;
}