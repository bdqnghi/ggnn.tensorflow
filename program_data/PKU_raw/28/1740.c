int main(){
	char a[10000],d[200][50];
	int n=0,k=0,i,j,l,t;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]!=' '){
			d[n][k]=a[i];
			k++;}
		else {
			if(a[i-1]!=' '){
				n++;
				k=0;}}}
	n++;
	for(i=0;i<n-1;i++){
		t=strlen(d[i]);
		printf("%d,",t);}
		
	t=strlen(d[n-1]);
	printf("%d",t);
        return 0;
}
