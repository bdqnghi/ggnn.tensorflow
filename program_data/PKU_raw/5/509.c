int main(){
	char a[501],b[501];
	int n,i,j;
	double r,m=0,l=0;
	scanf("%lf",&r);
	scanf("%s",&a);
	scanf("%s",&b);
	if(strlen(a)!=strlen(b)){
		printf("error");
		return 0;
	}
	else if(strlen(a)==strlen(b)){
		for(i=0;a[i]!='\0';i++){ 
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
				printf("error");
				return 0;
			}
			else if(a[i]==b[i]){
				m++;
			}
		}
	}
	l=strlen(a);
	if(m/l>r){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
