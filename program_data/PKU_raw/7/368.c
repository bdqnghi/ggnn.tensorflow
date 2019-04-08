int main (){
	char X[300];
	char Y[100];
	char Z[100];
	gets(X);
	gets(Y);
	gets(Z);
	int l,l1,l2;
	l=strlen(X);
	l1=strlen(Y);
	l2=strlen(Z);
	int i;
	int A=-1;
	for (i=0;i<l;i++){
		if(X[i]==Y[0]&&X[i+1]==Y[1]&&X[i+l1-1]==Y[l1-1]&&X[i+l1-2]==Y[l1-2]){
			A=i;
			break;
		}
	}
	if(A!=-1){
	for(i=0;i<A;i++){
		printf("%c",X[i]);
	}for(i=0;i<l2;i++){
		printf("%c",Z[i]);
	}for(i=A+l1;i<l;i++){
		printf("%c",X[i]);
	}
}else{
	for(i=0;i<l;i++){
		printf("%c",X[i]);
	}
}
	return 0;
}
		
