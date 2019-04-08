int main()
{
	int n,i;
	int A,B;
	int a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&A,&B);
		if((A==0&&B==1)||(A==1&&B==2)||(A==2&&B==0)){
			a++;
			continue;
		}
		if(A==B){
			a++;
			b++;
			continue;
		}
		else{
			b++;
			continue;
		}
	}
	if(a>b){
		printf("A\n");
		return 0;
	}
	if(a==b){
		printf("Tie\n");
		return 0;
	}
	if(a<b){
		printf("B\n");
	return 0;}
		
	return 0;
}
