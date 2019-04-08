int main(){
	double rate,realrate;
	char a[500],b[500];
	int len,lenb,yes=0;
	scanf("%lf",&rate);

	scanf("%s",a);
	scanf("%s",b);
		
	len=strlen(a);
	lenb=strlen(b);
	if(len!=lenb){
		printf("error");
		return 0;
	}

	for(int i=0;a[i]!='\0';i++){
            if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
			    printf("error");
				return 0;
			}

            if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
			    printf("error");
			    return 0;
			}
	        if(a[i]==b[i]){
			    yes++;
			}
	}
    realrate=1.0*yes/len;
	if(realrate>=rate)
		printf("yes");
	else printf("no");
		
	return 0;
}