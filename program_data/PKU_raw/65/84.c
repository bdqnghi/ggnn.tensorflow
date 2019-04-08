int main(){
	int i,n,s=0,f=0,p=0,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a-b==-1||a-b==2){
			s++;
		}
		if(a-b==0){
			p++;
		}
		if(a-b==1||a-b==-2){
			f++;
		}
	}
	if(s==f){
		printf("Tie");
	}
	if(s>f){
		printf("A");
	}
	if(s<f){
		printf("B");
	}
	return 0;
}


