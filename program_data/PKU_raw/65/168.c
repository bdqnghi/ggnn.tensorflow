int main(){
	int n;
	scanf("%d",&n);
	int a,b,A=0,B=0;
	for(int i=0;i<n;i++){
		scanf("%d%d\n",&a,&b);
        if(a<b){
			if(b-a==1){
		     A++;
			}else{
				B++;}}
		else if(a>b){
				if(a-b==1){
		     B++;
			}else{
				A++;}}
		else if(a=b){A=A;B=B;}
	}
	if(A>B){
		printf("A");}
	else if(A<B){
		printf("B");}
	else if(A=B){
		printf("Tie");}
	return 0;
}