int main(){
	int b,c,i,j1,j;
	double a,m,n;
	char s1[100],s2[100];
	c=0;
	scanf("%lf",&a);
	scanf("%s",s1);
	scanf("%s",s2);
	if(strlen(s1)!=strlen(s2)){
		printf("error");
		return 0;
	}else{
		for(i=0;s1[i]!='\0';i++){
			if(s1[i]!='A'&&s1[i]!='G'&&s1[i]!='C'&&s1[i]!='T'||s2[i]!='A'&&s2[i]!='G'&&s2[i]!='C'&&s2[i]!='T'){
				printf("error");
				return 0;
			}else{
				if(s1[i]==s2[i]){
					c++;
				}
			}
		}
	}
	m=1.0*strlen(s1);
	n=1.0*c;
	if(n/m>a){
		printf("yes");
	}else{
		printf("no");
	}
		return 0;
}
