


int main(){
	int n,n1,n2,i;
	char s[20];
	double h1[50],h2[50],t;
	cin>>n;
	n1=n2=0;
	for (i=0;i<n;i++){
		cin>>s>>t;
		if (strcmp(s,"male")==0){
			h1[n1++]=t;
		}else 
			h2[n2++]=t;
	}
	sort(h1,h1+n1);
	sort(h2,h2+n2);
	for (i=0;i<n1;i++){
		printf("%.2lf ",h1[i]);
	}
	for (i=n2-1;i;i--){
		printf("%.2lf ",h2[i]);
	}
	printf("%.2lf",h2[0]);
	puts("");
}