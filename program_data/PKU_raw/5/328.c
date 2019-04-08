int main(){
	double a,b;
	int n1,n2,m=0,c=0;
	char s1[500],s2[500];
	scanf("%lf",&a);
	scanf("%s %s",s1,s2);
	n1=strlen(s1);
	n2=strlen(s2);
	for(int i=0;s1[i]!='\0';i++){
		if((s1[i]=='A'||s1[i]=='G'||s1[i]=='C'||s1[i]=='T')&&(s2[i]=='A'||s2[i]=='G'||s2[i]=='C'||s2[i]=='T')){
			if(s1[i]==s2[i]){
				m++;
			}
		}else c=1;
	}
	if(c==1||n1!=n2){
		printf("error\n");
	}
	else {
		b=m*1.0/n1;
		if(a<b){
			printf("yes\n");
		}
		else printf("no\n");
	}
	return 0;
}
