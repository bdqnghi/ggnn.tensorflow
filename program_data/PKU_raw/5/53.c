
int atgc(char a){
	if(a=='A'||a=='G'||a=='C'||a=='T'){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	double m;
	char xl1[500]={'\0'},xl2[500]={'\0'};
	scanf("%lf %s %s",&m,xl1,xl2);
	int len1,len2;
	len1=strlen(xl1);
	len2=strlen(xl2);
	if(len1!=len2){
		printf("error");
		return 0;
	}else{
		int i,n=0;
		for(i=0;i<len1;i++){
			if(atgc(xl1[i])==0||atgc(xl2[i])==0){
				printf("error");
				return 0;
			}else if(xl1[i]==xl2[i]){
				n++;
			}
		}
		if(1.0*n/len1>=m){
			printf("yes");
		}else{
			printf("no");
		}
	}

	return 0;
}