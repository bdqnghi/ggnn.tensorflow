int compare(char x,char y);
int main(){
	double n;
	char DNA1[502],DNA2[502];
	int len1,len2;
	scanf("%lf",&n);
	scanf("%s",DNA1);
	scanf("%s",DNA2);
	len1=strlen(DNA1);
	len2=strlen(DNA2);
	int i,m=0;
	int e;
	int p=0;
	double result;
	if(len1!=len2){
		printf("error");
	}else{
		for(i=0;i<len1;i++){
			e=compare(DNA1[i],DNA2[i]);
			if(e==1){
				m++;
			}
			if((DNA1[i]!='A'&&DNA1[i]!='T'&&DNA1[i]!='G'&&DNA1[i]!='C')||(DNA2[i]!='A'&&DNA2[i]!='T'&&DNA2[i]!='G'&&DNA2[i]!='C')){
				printf("error");
				p=1;
				break;
			}
		}
		if(p==0){
			result=((double)m/(double)len1);
			if(result>n){
				printf("yes");
			}else{
				printf("no");
			}
		}
	}
	return 0;
}

int compare(char x,char y){
	if((x=='A'&&y=='A')||(x=='T'&&y=='T')||(x=='C'&&y=='C')||(x=='G'&&y=='G')){
		return 1;
	}else{
		return 0;
	}
}