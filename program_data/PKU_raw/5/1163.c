int main(){
	double x,s=0;
	char a[502],b[502];
	int len1,len2,i;
	scanf("%lf %s %s",&x,a,b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2){
		printf("error");
		return 0;
	}
	for(i=0;i<len1;i++){
		if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
			printf("error");
			return 0;
		}
	}
    for(i=0;i<len2;i++){
		if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<len1;i++){
		if(a[i]==b[i]){
			s++;
		}
	}
	s=s/len1;
	if(s>x){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}





