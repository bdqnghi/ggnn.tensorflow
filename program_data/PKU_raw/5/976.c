int main(){
	double n;
	char s1[501];
	char s2[501];
	scanf("%lf",&n);
	scanf("%s",s1);
	scanf("%s",s2);
	int i,len1,len2,sum=0;
	double gl;
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1!=len2){
		printf("error");
		return 0;
	}
	else{
		for(i=0;i<len1;i++){
			if((s1[i]=='A'||s1[i]=='T'||s1[i]=='C'||s1[i]=='G')&&(s2[i]=='A'||s2[i]=='T'||s2[i]=='C'||s2[i]=='G')){
				if(s1[i]==s2[i]){
					sum+=1;
				}
			}else{
				printf("error");
				return 0;
			}
		}
		gl=1.0*sum/len1;
		if(gl>n){
			printf("yes");
		}
		else{
			printf("no");		
		}
	}
	return 0;
}