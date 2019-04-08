int main(){
	double q;
	scanf("%lf", &q);
	char a[1000], b[1000];
	scanf("%s", a);
	scanf("%s", b);
	int i, m, n;
    m=strlen(a);
	n=strlen(b);
	if(m!=n){
		printf("error\n");
		return 0;
	}
	for(i=0;i<n;i++){
		if(a[i]!='A' && a[i]!='T' && a[i]!='G' && a[i]!='C'){
			printf("error\n");
			return 0;
		}
		if(b[i]!='A' && b[i]!='T' && b[i]!='G' && b[i]!='C'){
			printf("error\n");
		    return 0;
		}
	}
	int c=0;
	for(i=0;i<m;i++){
		if(a[i]==b[i]){
			c++;
		}
	}
	double x;
	x=(1.0*c)/(1.0*m);
	if(x>=q){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}




			
