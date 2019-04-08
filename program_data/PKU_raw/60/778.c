int S(int a){
	int i,c=0;
	for(i=2;i<a;i++){
		if(a%i==0) c++;
	}
	if(c==0) return 1;
	else return 0;
}

int main(){
	int n,i,j=0,k=0;
	scanf("%d",&n);
	int*s=(int*)malloc(sizeof(int)*n);
	for(i=2;i<=n;i++){
		if(S(i)){
			s[j]=i;
			j++;
		}
	}
	for(i=0;i<j-1;i++){
		if(s[i+1]-s[i]==2) {printf("%d %d\n",s[i],s[i+1]);k++;}
	}
	if(k==0) printf("empty");
	free(s);
	return 0;
}