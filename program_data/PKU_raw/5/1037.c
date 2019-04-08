
int main(){
	double xgl,e;
	char a[501],b[501];
	double cd1,cd2;
	int i;
	double js=0;

	scanf("%lf",&xgl);
	scanf("%s %s",a,b);

	cd1=strlen(a);
	cd2=strlen(b);

	if(cd1!=cd2){
		printf("error");
		return 0;
	}
	for(i=0;i<cd1;i++){
		if((a[i]=='A'&&b[i]=='A')||(a[i]=='T'&&b[i]=='T')||(a[i]=='C'&&b[i]=='C')||(a[i]=='G'&&b[i]=='G')){
			js++;
		}else if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
			printf("error");
			return 0;
		}
	}
	e=js/cd1;
	if(e>xgl){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
