int main(){
	int n;
	int number[NUMBER];
	scanf("%d", &n);
	int i=0;
	int a;
	while(i<n){
		scanf("%d", &a);
		number[i]=a;
		i++;
	}
	while((n-1)>=0){
		if((n-1)>0){
			printf("%d ", number[n-1]);
		n--;
		}
		else{
			printf("%d", number[0]);
			n--;
		}
	}
	return 0;
	scanf("%d",1);
}