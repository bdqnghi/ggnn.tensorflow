int a[max];
int b[max];
void cf(int *a,int *b);
void qldy(int *b);
int main(){
	int i;
	for(i=0;i<max;i++){
		a[i]=0;
		b[i]=0;
	}
	
	a[0]=1;
	
	int n;
	scanf("%d",&n);
        if(n==0){
           printf("1");
        }
	for(i=1;i<=n;i++){
		cf(a,b);
	}

	qldy(b);
	return 0;
}
void cf(int *a,int *b){
	int i;
	for(i=0;i<max-1;i++){
		b[i]=a[i]*2;
		
	}
	for(i=0;i<max-1;i++){
		if(b[i]>=10){
			b[i+1]+=b[i]/10;
			b[i]%=10;
		}
	}
	for(i=0;i<max-1;i++){
		a[i]=b[i];
	}
}
void qldy(int *b){
	int i;
	for(i=max-1;i>=0;i--){
		if(b[i]!=0){
			break;
		}
	}
	int t=i;
	for(i=t;i>=0;i--){
		printf("%d",b[i]);
	}

}